#include<stdio.h>
int main(){
	int i,evensum =0,oddsum=0;
	
	for(i=1;i<=10;i++){
		if(i%2==0)
		evensum += i;
		else
		oddsum += i;
	}
	
	printf("sum of even nums = %d\n",evensum);
	printf("sum of odd nums %d\n",oddsum);
}
