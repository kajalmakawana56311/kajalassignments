#include<stdio.h>
int main(){
	int num, firstDigit, lastDigit;
	
	printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num%10;
    
    firstDigit = num;
    while (firstDigit>=10){
    	firstDigit = firstDigit/10;
	}
	printf("sum of frist and last digit =%d",firstDigit+lastDigit);
	return 0;
	

}
