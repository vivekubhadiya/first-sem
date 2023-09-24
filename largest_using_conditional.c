# include <stdio.h>
 
void main()
{
    int a, b, c, big ;
    printf("Enter the numbers : ") ;
    scanf("%d",&a) ;
    printf("Enter the numbers : ") ;
    scanf("%d",&b) ;
	printf("Enter the numbers : ") ;
    scanf("%d",&c) ;
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
    printf("\nThe biggest number is : %d", big) ;
}
