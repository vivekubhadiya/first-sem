#include<stdio.h>
#include<time.h>
void main()
{
	time_t tm;
	time(&tm);
	printf("%s", ctime(&tm));
}
