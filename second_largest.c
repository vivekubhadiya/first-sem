#include<stdio.h>

void main(){
		int a,b,c;
		printf("Enter a : ");
		scanf("%d",&a);
		printf("Enter b : ");
		scanf("%d",&b);
		printf("Enter c : ");
		scanf("%d",&c);
		if(a>b && c<b){
			printf("b is second largest");
		}
		else if(a>c && b<c){
			printf("c is second largest");
		}
		else  if(b>a && c<a){
			printf("a is second largest");
		}
}
