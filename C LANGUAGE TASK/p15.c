#include<stdio.h>
int main(){
	int num;
	
	printf("Enter a number");
	scanf("%d", &num);
	
	if(num % 3==0){
		if(num % 5==0){
			printf("%d is divisible by both 3 and 5", num);
		}else{
			printf("%d is divisible by 3 but not by 5", num);
		}
	}else{
		printf("%d is not divisible by both 3 and 5", num);
	}
	return 0;
}
