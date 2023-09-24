#include<stdio.h>
void main(){
		
	int n,i=1,count=0;
	printf("Enter number :");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		printf("\nPrime number ");
	}
	else{
		printf("\nNon Prime number ");
	}
}
