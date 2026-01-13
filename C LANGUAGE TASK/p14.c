#include<stdio.h>
int main(){
	
	char ch;
	printf("enter a value");
	scanf("%c", &ch);
	
	if((ch > 'A' && ch <='Z') || (ch >= 'a' && ch <='Z')){
		printf("\nIT is a Charecter");
		
	}else if((ch>='0' && ch<='9')){
		printf("\n IT is a Digit");
	}else{
		printf("\n IT is a Special Charecter");
	}
}
