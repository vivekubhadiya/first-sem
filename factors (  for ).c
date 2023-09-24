#include<stdio.h>
void main(){
	
	int n,i=1;
	printf("Factors of :");
	scanf("%d",&n);
	for(;i<=n;i++){
		if(n%i==0){
			printf("%d\n",i);
		}
	}	
}
