#include<stdio.h>

void main(){
	int a,b,i,j;
	printf("enter array size (a b):");
	scanf("%d %d",&a, &b);
	
	int arr[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		
		printf("arr (%d,%d) ",i+1,j+1);
		scanf("%d",&arr[i][j]);
	}
	}
	
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
}
