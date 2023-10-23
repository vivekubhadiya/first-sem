#include<stdio.h>
void main(){
	int i,n;
	printf("enter yopur num");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf(" normal arr = [%d]",i);
		scanf("%d",&arr[i]);
		
	}
	for(i=n-1;i>=0;i--){
		printf(" reverse arr[%d]=%d\n",i,arr[i]);
	}


}

