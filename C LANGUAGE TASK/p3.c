#include<stdio.h>
int main(){
	char op;
	float num1,num2;
	
	printf("Enter operator (+, -, *, /):");
	scanf("%c", &op);
	
	printf("Enter two numbers:");
	scanf("%f %f", &num1, &num2);
	
	switch (op){
		case'+':
			printf("result = %.2f",num1 + num2);
			break;
			
		case '-':
			printf("result = %.2f", num1 - num2);
			break;
			
		case'*':
			printf("result =%.2f"), num1 * num2;
			break;
			
		case '/':
			printf("result =%.2f"), num1 / num2;
			break;
			
	    defult:
	    	printf("invalid operator!");
				
	}
	return 0;
}

