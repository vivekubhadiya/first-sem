#include<stdio.h>
void main(){
	int i,j,n,sum=0;
	printf("enter your number");
	scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{ 
	printf("%d",j);
		sum=sum+j;
	
	}	 printf("\n");
}
	printf("sum=%d ",sum);

}
