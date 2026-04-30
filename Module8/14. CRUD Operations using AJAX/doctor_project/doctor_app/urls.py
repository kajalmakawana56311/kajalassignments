from django.urls import path
from . import views

urlpatterns = [
    path('', views.index),
    path('add/', views.add_doctor),
    path('edit/<int:id>/', views.edit_doctor),
    path('delete/<int:id>/', views.delete_doctor),
]