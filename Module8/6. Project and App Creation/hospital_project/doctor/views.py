from django.shortcuts import render, redirect
from .models import Doctor
from .forms import DoctorForm

# Create doctor
def add_doctor(request):
    if request.method == 'POST':
        form = DoctorForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('/')
    else:
        form = DoctorForm()

    return render(request, 'add.html', {'form': form})


# List doctors
def doctor_list(request):
    doctors = Doctor.objects.all()
    return render(request, 'list.html', {'doctors': doctors})