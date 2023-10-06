#include<stdio.h>
void main(){
	int n,rem,temp,sum=0;
	printf("enter number = ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
}
printf("%d\n",sum);
	if(sum==temp)
	{
		printf("number is palindrome");
		
	} 
	else
	{
		printf("number is not palindrome");
	}
	
}
