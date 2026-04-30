from django import forms
from .models import Doctor

class DoctorForm(forms.ModelForm):
    class Meta:
        model = Doctor
        fields = ['name', 'specialization', 'experience', 'is_available']

    def clean_experience(self):
        exp = self.cleaned_data.get('experience')
        if exp < 0:
            raise forms.ValidationError("Experience cannot be negative")
        return exp