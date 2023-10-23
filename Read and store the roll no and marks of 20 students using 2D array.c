#include<stdio.h>
void main(){
	int i,j,roll,mark;
int	arr[20][2];
for(roll=0;roll<20;roll++){
		for(mark=0;mark<2;mark++){
		if(mark==0)
		{
			printf("Enter roll no ");
		scanf("%d",&arr[roll][mark]);
	     }
	     else 
	     {
	     		printf("Enter mark ");
			scanf("%d",&arr[roll][mark]);
		 }
	}
	}for(roll=0;roll<20;roll++){
		for(mark=0;mark<2;mark++){
	printf("%d ",arr[roll][mark]);
}
printf("\n");
}

}
