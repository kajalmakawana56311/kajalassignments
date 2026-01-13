#include<stdio.h>
int main(){
	float temp;
	
	printf("enter a temperature in celsius:");
	scanf("%f",&temp);
	
	if(temp<10){
		printf("weather is cold\n");
	}else if(temp>=10 && temp<25){
		printf("weather is warm\n");
	}else if(temp>=25 && temp<35){
		printf("weather is hot\n");
	}
	else{
		printf("weather is very hot\n");
	}
}
