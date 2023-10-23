#include<stdio.h>
void main(){
	int i,j,positive=0,negative=0,zero=0;
	int arr[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr(%d %d)",i,j);
			scanf("%d ",&arr[i][j]);
			if(arr[i][j]<0){
			
			negative++;
		}
		else if(arr[i][j]>0){
			positive++;
		}
		else{
			zero++;
		}
		}
	}
	printf("positive=%d\n",positive);
		printf("negative=%d\n",negative);
			printf("zero=%d",zero);
	
}
