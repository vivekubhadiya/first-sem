#include<stdio.h>
void main(){
	int i,count=0,n;
	printf("enter your array:");
	scanf("%d",&n);
   	int height[n],weight[n];
	for(i=0;i<n;i++){	
		printf("height[%d]=",i);
		scanf("%d",&height[i]);
		printf("weight[%d]=",i);
		scanf("%d",&weight[i]);
	}
	for(i=0;i<n;i++){
		if(height[i]>170 && weight[i]<50){
			count++;
		}
	}
	printf("count height and weight = %d",count);  
}
