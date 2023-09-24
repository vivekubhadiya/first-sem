#include<stdio.h>

void main(){
	
	int n,x;
	printf("Enter no	:");
	scanf("%d",&n);
	printf("Reverse no	:");
	while(n>0){
		
		x=n%10;
		printf("%d",x);
		n=n/10;
		
	}
}

