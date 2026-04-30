from django.db import models

class UserProfile(models.Model):
    username = models.CharField(max_length=100)
    age = models.IntegerField()
    is_public = models.BooleanField(default=True)
    photo = models.ImageField(upload_to='profiles/', null=True, blank=True)

    def __str__(self):
        return self.username
