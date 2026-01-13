#include<stdio.h>
int main(){
	char light;
	
	printf("enter traffic light (R/Y/G)");
	scanf("%c",&light);
	
	switch (light){
		case 'R':
		case 'r':
			printf("red light:stop");
			break;
			
		case 'Y':
		case 'y':
			printf("yellow light:ready / slow down");
			break;
			
		case 'G':
		case 'g':
			printf("green light: go");
			break;
			
		defult:
			printf("invalid input");
				
	}
}
