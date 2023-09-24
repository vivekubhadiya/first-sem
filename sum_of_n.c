#include<stdio.h>

void main(){
	int a,b=1,c=0;
	printf("Enter 5 numbers for addition :\n");
	while(b<=5){
	scanf("%d",&a);
	b++;
	c=a+c;
	
	}
	printf("Sum is : %d",c);
}
