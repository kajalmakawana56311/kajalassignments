from django.shortcuts import render, redirect
from .models import Doctor

def index(request):
    doctors = Doctor.objects.all()

    if request.method == "POST":
        Doctor.objects.create(
            name=request.POST.get("name"),
            email=request.POST.get("email"),
            phone=request.POST.get("phone"),
            specialization=request.POST.get("specialization")
        )
        return redirect('/')

    return render(request, "index.html", {"doctors": doctors})
