from django.shortcuts import render, redirect
from .models import Doctor

# CREATE + READ
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


# DELETE
def delete_doctor(request, id):
    Doctor.objects.get(id=id).delete()
    return redirect('/')


# UPDATE
def update_doctor(request, id):
    doctor = Doctor.objects.get(id=id)

    if request.method == "POST":
        doctor.name = request.POST.get("name")
        doctor.email = request.POST.get("email")
        doctor.phone = request.POST.get("phone")
        doctor.specialization = request.POST.get("specialization")
        doctor.save()
        return redirect('/')

    return render(request, "update.html", {"doctor": doctor})
