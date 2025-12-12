#include<stdio.h>
int main(){
	float side, length, width;
	
	printf("enter the side square:");
	scanf("%f", &side);
	printf("area of the square = %.2f\n", side * side);
	
	printf("enter the length of rectangle:");
	scanf("%f", &length);
	
	printf("enter the width of rectangle:");
	scanf("%f", &width);
	
	printf("area of the reactangle = %.2f\n", length * width);
	return 0;
}
