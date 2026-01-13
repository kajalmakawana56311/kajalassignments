#include<stdio.h>
int main(){
	int a[10]={12,45,3,22,89,5,7,34,1,66};
	int min=a[0], max=a[0],i;
	
	for(i=1; i<10; i++){
		if(a[i] < min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	printf("min = %d\n", min);
	printf("max = %d\n", max);
}
