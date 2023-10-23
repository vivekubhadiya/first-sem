#include<stdio.h>
void main(){
	 int i,n,positive=0,negative=0;
	 printf("enter number");
	 scanf("%d",&n);
	 int arr[n];
	 for(i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 	if(arr[i]>0){
	 		positive++;
	 		
		 }
		 else{
		 	negative++;
		 }
	 }
	 printf("positive number=%d\n",positive);
	 	 printf("negative number=%d\n",negative);

}
