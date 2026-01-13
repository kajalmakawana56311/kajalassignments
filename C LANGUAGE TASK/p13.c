#include<stdio.h>
int main(){
	int num;
	
	printf("enter a num");
	scanf("%d", &num);
	
	if(num == 0){
		printf("num is zero");
	}else{
		printf("num is non-zero");
	}
}
