#include<stdio.h>
int main(){
	int year;
	
	printf("enter a year");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0){
		printf("%d is Leap year", year);
	}
	else{
		printf("%d is Not a Leap Year", year);
	}
}
