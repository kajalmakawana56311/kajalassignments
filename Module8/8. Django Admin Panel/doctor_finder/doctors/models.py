from django.db import models

class Doctor(models.Model):
    name = models.CharField(max_length=100)
    specialization = models.CharField(max_length=100)
    experience = models.IntegerField(help_text="Years of experience")
    hospital = models.CharField(max_length=150)
    location = models.CharField(max_length=100)
    phone = models.CharField(max_length=15)
    email = models.EmailField()
    available = models.BooleanField(default=True)
    profile_image = models.ImageField(upload_to='doctors/', null=True, blank=True)

    def __str__(self):
        return self.name