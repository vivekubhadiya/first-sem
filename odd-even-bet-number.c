#include<stdio.h>

void main(){
	
	int n,i=0,x=0;
	printf("\t\t\t\t\t\*Enter -1 to stop\*\n\n");
	while(n!=-1){
		printf("\tno. :");
		if(n%2==0){
			i=i+n;
		}
		else{
			x=x+n;
		}
		scanf("\n%d",&n);
	}
	printf("\n\tEven Sum is	:%d\n",i);
	printf("\tOdd Sum is	:%d",x);
}

