#include<stdio.h>

void main(){
	int R,G,B,R1,G1,B1,C,Y,M,K,W;
	printf("Red color : ");
	scanf("%d",&R);
	printf("Green color : ");
	scanf("%d",&G);
	printf("Blue color : ");
	scanf("%d",&B);
	R1=R/255;
	G1=G/255;
	B1=B/255;
	W=R1;
	C=(W-R1)/W;
	Y=(W-B1)/W;
	M=(W-G1)/W;
	K=1-W;
	printf("White ",R1);
	printf("Cyan ",C);
	printf("Yellow ",Y);
	printf("Magenta ",M);
	printf("Black ",K);
}
