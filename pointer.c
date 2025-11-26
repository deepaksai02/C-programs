#include<stdio.h>
int main()
{
	int *p=NULL;
	int a=10; 
	int b=20;
	int *p1,*p2;
	p1=&a;
	printf("\n p1 is %u",*p1);
	printf("\n p1+1 is %u",*p1+1);
	p2=&b;
	printf("\n p2 is %u",*p2);
	printf("\n p2+1 is %u",*p2+1);
	return 0;
}
