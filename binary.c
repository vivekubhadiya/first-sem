#include<stdio.h>
void main(){
	
	
	int n,x,i=n;
	printf("Enter number	:");
	scanf("%d",&n);
	while(i>=0){
		x=n%2;
		printf("%d",x);
		n=n/2;
		i=n;
	}
}
