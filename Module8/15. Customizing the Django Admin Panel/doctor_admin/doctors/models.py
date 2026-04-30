from django.db import models

class Doctor(models.Model):
    name = models.CharField(max_length=100)
    specialty = models.CharField(max_length=100)
    phone = models.CharField(max_length=15)
    availability = models.CharField(max_length=50)

    def __str__(self):
        return self.name
