#include<stdio.h>
int main(){
	int num;
	
	printf("enter a number:");
	scanf("%d", &num);
	
	if(num %2 == 0){
		printf("%d is even num \n",num);
	}else{
		printf("%d is odd num \n",num);
	}
	return 0;
}
