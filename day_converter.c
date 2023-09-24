#include<stdio.h>

int main(){
			int d,w,y,day;
		    printf("\t\t\t\t\t convertor \n\n\n");
			printf("\tEnter days : ");
			scanf("%d",&day);
			y=(day*0.00277777778);
			w=(day-(360*y))/30;
			d=(day-(360*y))-(w*30)-5;
			printf("\t%d year,%d month and %d days",y,w,d);
	}
