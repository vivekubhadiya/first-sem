#include <stdio.h>
void main(){
	int i,n,sum=0,avg,count=0;
	printf("enter your size in array:");
	scanf("%d",&n);
	int arr[n];
	  for(i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
}
	avg=sum/n;
	  for(i=0;i<n;i++)
{
	      if(arr[i]>avg){
		      count++;
}
}
    printf("sum=%d\n",sum);
    printf("avg=%d\n",avg);
	printf("count the num in higher than avg=%d",count);
}
