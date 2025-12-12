#include<stdio.h>
#define PI 3.14

int main(){
	float radius,area;
	
	printf("enter radius of the circle:");
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	
	printf("area of the circle : %.2f\n", area);
	
	return 0;
}
