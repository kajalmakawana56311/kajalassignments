#include<Stdio.h>
int main(){
	
	int ab,bc,ac;
	printf("enter three sides of triangle meassure ab, meassure bc, meassure ca:");
	scanf("%d %d %d", &ab,&bc,&ac);
	if((ab==bc)&&(bc==ac)){
		printf("angle is equivalent");
	}
	else if((ab==bc)||(bc==ac)){
		printf("angle is isosceles");
	}
	else if((ab!=bc)&&(bc!=ac)){
		printf("angle is scalene");
	}
}
