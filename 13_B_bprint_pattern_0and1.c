#include<stdio.h>
int main(){
	int i,j,a=1,b;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			b=a%2;
			printf("%d",b);
			a++;
		}printf("\n");
		
	}
	
	
	return 0;
	
}
