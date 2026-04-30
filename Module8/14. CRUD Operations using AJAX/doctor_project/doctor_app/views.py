from django.shortcuts import render, get_object_or_404
from django.http import JsonResponse
from .models import Doctor

def index(request):
    doctors = Doctor.objects.all()
    return render(request, 'index.html', {'doctors': doctors})


def add_doctor(request):
    if request.method == "POST":
        doc = Doctor.objects.create(
            name=request.POST.get('name'),
            specialization=request.POST.get('specialization'),
            experience=request.POST.get('experience')
        )
        return JsonResponse({
            'id': doc.id,
            'name': doc.name,
            'specialization': doc.specialization,
            'experience': doc.experience
        })


def edit_doctor(request, id):
    doc = get_object_or_404(Doctor, id=id)

    if request.method == "POST":
        doc.name = request.POST.get('name')
        doc.specialization = request.POST.get('specialization')
        doc.experience = request.POST.get('experience')
        doc.save()
        return JsonResponse({'status': 'updated'})


def delete_doctor(request, id):
    doc = get_object_or_404(Doctor, id=id)
    doc.delete()
    return JsonResponse({'status': 'deleted'})