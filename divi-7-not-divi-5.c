#include<stdio.h>

	void main(){

		int i=100,rem=0;
		rem=i%7;
		i=((i-rem)+7);
		while(i<=200){
			
			printf("%d\n",i);
			i=i+7;
			
			}	
}
