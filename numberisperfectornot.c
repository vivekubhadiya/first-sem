#include<stdio.h>
void main(){
int   n,i=1,sum=0;
printf("enter number");
scanf("%d",&n);
while(i<n){
	if(n%i==0){
		sum=sum+i;
		printf("fector = %d\n",i);
		}
		i++;
		}
		printf("%d\n",sum);
		if(sum==n)
		{
			printf("perfect number");
		}
	else
	{ 
	printf("not perfect");
	}
	
}

