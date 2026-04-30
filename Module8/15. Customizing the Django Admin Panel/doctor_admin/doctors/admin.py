from django.contrib import admin
from .models import Doctor

@admin.register(Doctor)
class DoctorAdmin(admin.ModelAdmin):
    list_display = ('id', 'name', 'specialty', 'phone', 'availability')
    list_filter = ('specialty', 'availability')
    search_fields = ('name', 'specialty', 'phone')
    list_editable = ('phone', 'availability')
