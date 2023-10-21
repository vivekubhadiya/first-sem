#include <stdio.h>
void main(){
int i,n,j,temp;
printf("enter size in array:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
	if(arr[j]<arr[i]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;		
	}}
	}
	printf("ascending order :");
	for(i=0;i<n;i++)	
	{
printf("\t%d",arr[i]);
}}

