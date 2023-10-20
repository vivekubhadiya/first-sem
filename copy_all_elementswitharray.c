#include<stdio.h>
void main(){
	int i,n;
	printf("enter size of array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	}
		int arr2[n];
		for(i=0;i<n;i++){
			arr2[i]=arr[i];
		}	
		printf("Original array\n");
			for(i=0;i<n;i++){
			printf("arr1[%d]=%d\n",i,arr[i]);
		}
		printf("copy array\n");
			for(i=0;i<n;i++){
			printf("arr2[%d]=%d\n",i,arr2[i]);
	}
}
