#include<stdio.h>
int main(){
	
	int num,square,cube;
	
	printf("enter a number:");
	scanf("%d", &num);
	
	square = num * num;
	cube = num * num * num;
	
	printf("enter =%d\n", square);
	printf("cube =%d\n", cube);
	
	return 0;
}
