from django.urls import path
from . import views

urlpatterns = [
    path('', views.profile_list, name='list'),
    path('create/', views.create_profile, name='create'),
    path('export/', views.export_profiles, name='export'),
]