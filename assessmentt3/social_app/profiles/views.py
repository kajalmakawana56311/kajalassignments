from django.shortcuts import render, redirect
from .models import UserProfile
from .forms import UserProfileForm
import csv
from django.http import HttpResponse

def profile_list(request):
    profiles = UserProfile.objects.all()
    return render(request, 'list.html', {'profiles': profiles})


def create_profile(request):
    if request.method == 'POST':
        form = UserProfileForm(request.POST, request.FILES)
        if form.is_valid():
            form.save()
            return redirect('list')
    else:
        form = UserProfileForm()

    return render(request, 'create.html', {'form': form})


def export_profiles(request):
    profiles = UserProfile.objects.all()

    with open('profiles.csv', 'w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(['Username', 'Age', 'Public'])

        for p in profiles:
            writer.writerow([p.username, p.age, p.is_public])

    response = HttpResponse(open('profiles.csv', 'rb'), content_type='text/csv')
    response['Content-Disposition'] = 'attachment; filename="profiles.csv"'
    return response
