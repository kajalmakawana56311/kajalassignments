#include<stdio.h>
int main(){
	int arr[100],n,i,j,temp;
	
	printf("enter num of elements:");
	scanf("%d",&n);
	
	printf("enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("second largest num is: %d\n",arr[1]);
}
