from django.shortcuts import render

# Create your views here.

def home(request):
    data = {
        'name': 'Kajal'
    }
    return render(request, 'index.html', data)