#include<stdio.h>
void main(){
	int i,n,count=0;
	printf("enter size of array");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	if(arr[i]<0){
		count++;	
	}
}
	printf("count=%d",count);
}
