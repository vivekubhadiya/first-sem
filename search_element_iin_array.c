#include<stdio.h>
int main(){
	int i,n,a,count=0;
	printf("enter size of array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
			}
	printf("enter choice array:");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a==i)
		{
			printf("arr[%d]=%d",i,arr[i]);
		}
	}}
