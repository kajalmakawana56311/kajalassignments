from django.urls import path
from . import views
from django.contrib.auth import views as auth_views

urlpatterns = [
    path('', views.signup, name='signup'),  
    path('signup/', views.signup),
    path('login/', auth_views.LoginView.as_view(template_name='login.html')),
    path('profile/', views.profile),
]