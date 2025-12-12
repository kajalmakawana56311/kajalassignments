#include<stdio.h>
int main(){
	float P,R,N,SI;
	
	printf("enter principal amount:");
	scanf("%f", &P);
	
	printf("enter rate ");
	scanf("%f", &R);
	
	printf("enter time (in years):");
	scanf("%f", &N);
	
	SI = (P*R*N) / 100;
	
	printf("simple interest rate is:%.2f\n", SI);
	
	return 0;
}
