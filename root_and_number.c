#include<stdio.h>
#include<math.h>

void main(){
	int i=0,n;
	printf("Enter series : ");
	scanf("%d",&n);
	while(i<=n){
		printf("Root of %d = %f\n",i,sqrt(i));
		i++;
	}
}

