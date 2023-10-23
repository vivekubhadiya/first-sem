#include<stdio.h>
void main(){
int n,i,odd=0,even=0;
printf("enter your number:");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
	printf("enetr arr[%d]:",i);
	scanf("%d",&arr[i]);
if(arr[i]%2){
	odd++;
}
else{
	even++;
}
}
printf("odd number =%d\n",odd);
printf("even number =%d\n",even);	
}
