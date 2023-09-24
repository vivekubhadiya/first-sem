#include<stdio.h>
void main(){
	
	
	int n,x,i=1,one=1,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9,ten=10;
	printf("Enter number	:");
	scanf("%d",&n);
	while(i>0){
		
		x=n%10;
		switch(x){
			case 1:
				if(x==1){
					printf("One ");
				}
			case 2:
				if(x==1){
					printf("Two ");
				}
			case 3:
				if(x==3){
					printf("three ");
				}
			case 4:
				if(x==4){
					printf("Four ");
				}
			case 5:
				if(x==5){
					printf("Five ");
				}
			case 6:
				if(x==6){
					printf("Six ");
				}
			case 7:
				if(x==7){
					printf("Seven ");
				}
			case 8:
				if(x==8){
					printf("Eight ");
				}
			case 9:
				if(x==9){
					printf("Nine ");
				}
			case 10:
				if(x==10){
					printf("Ten ");
				}
			
			}
		}
	}
