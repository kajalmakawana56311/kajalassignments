#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

   while(1){
   	 printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    if (operator == 'n' || operator == 'N') {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }


   	 printf("Enter first number: ");
    scanf("%lf", &num1);

   
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
   
    switch (operator) {
    	
        case '+':{
			
            printf("Result: %.2lf\n", num1 + num2);
            break;	
			}

        case '-':{
		
	
            printf("Result: %.2lf\n", num1 - num2);
            break;
				}

        case '*':{
		
	
            printf("Result: %.2lf\n", num1 * num2);
            break;
	}
        case '/':{
		
		
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
			}

        case '%':{
		
	
            if ((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
				}
	

        default:{		
            printf("Error: Invalid operator '%c'\n", operator);
				break;
    }
}   
}
}

