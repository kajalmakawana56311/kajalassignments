#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter two number");
	scanf("%d %d", &a, &b);
	
	if(a>b){
		printf("%d is greater", a);
	} else if(b>a){
		printf("%d is grater",b);
	}else {
		printf("both nums are equal");
	}
	
}
