from django.shortcuts import render

def profile(request):
    doctors = [
        {
            'name': 'Dr. Priya Sharma',
            'specialization': 'Dermatologist',
            'experience': '8 Years'
        },
        {
            'name': 'Dr. Rahul Mehta',
            'specialization': 'Cardiologist',
            'experience': '10 Years'
        },
        {
            'name': 'Dr. Neha Patel',
            'specialization': 'Dentist',
            'experience': '5 Years'
        }
    ]

    return render(request, 'profile.html', {'doctors': doctors})
