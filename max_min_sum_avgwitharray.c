#include <stdio.h>
void main(){
	int i,n;
	printf("enter your size of the array:");
	scanf("%d",&n);
int arr[n];
	for(i=0;i<n;i++){
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=max;
    int sum=0;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
	}
 		if(arr[i]<min){
	 		min=arr[i];
	}
	sum=sum+arr[i];
    } 
    float avg;
    avg=sum/n;
	printf("maximum value =%d\n",max);
	printf("minimum value =%d\n",min);
	printf("sum =%d\n",sum);
	printf("avg =%f",avg);
	
}
