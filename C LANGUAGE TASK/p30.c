#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[10],j=0,i;
	
	for(i=0; i<10; i++){
		if(a[i] %2 !=0){
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++){
		printf("%d",b[i]);
	}
}
