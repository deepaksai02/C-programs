#include<stdio.h>
int main()
{
	float len,wid,area;
	printf("enter the value of len,wid(in cm):");
	scanf("%f%f",&len,&wid);
	area=len*wid;
	printf("area of rectangle=%.3f cm\n",area);
	return 0;
	}
