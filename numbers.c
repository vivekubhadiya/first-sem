#include<stdio.h>
int main(){
	
	long int x,n;
	char i;
	printf("\t\t\t\tpruthviraj=p\n\t\t\t\tBhavesh=b\n\t\t\t\tBhaveshCUG=bc\n\t\t\t\tDaksha=d\n\t\t\t\tJanu=j");
	printf("\n\n\n\n\tEnter name :");
	scanf("%c",&i);
	switch(i){
		
		case 'p' :printf("\n\tEnter number :");
				  scanf("%ld",&x);
				  (x==9054652854)?printf("\n\tCorrect"):printf("\n\tIncorrect");
				  break;
		case 'd' :printf("\n\tEnter number :");
				  scanf("%ld",&x);
				   (x==7984825770)?printf("\n\tCorrect"):printf("\n\tIncorrect");
				  break;
		case 'b' :printf("\n\tEnter number :");
				  scanf("%ld",&x);
				   (x==9558152854)?printf("\n\tCorrect"):printf("\n\tIncorrect");
				  break;
		case 'bc' :printf("\n\tEnter number :");
				  scanf("%ld",&x);
				   (x==9687663031)?printf("\n\tCorrect"):printf("\n\tIncorrect");
				  break;
		case 'j' :printf("\n\tEnter number :");
				  scanf("%ld",&x);
				   (x==8866525770)?printf("\n\tCorrect"):printf("\n\tIncorrect");
				  break;
		default : printf("\n\tEnter valid number ");
	}
}
