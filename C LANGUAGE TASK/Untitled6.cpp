#include<stdio.h>
int main(){
	int num, firstDigit, lastDigit;
	
	printf("Enter a number: ");
    scanf("%d", &num);
    
    last digit = num%10;
    
    fristdigit = num;
    while (fristdigit>=10){
    	fristdigit = fristdigit/10;
	}
	printf("sum of frist and last digit =%d",fristdigit+lastdigit);
	return 0;
	

}
