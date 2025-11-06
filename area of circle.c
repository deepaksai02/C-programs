#include<stdio.h>
#define pi 3.14
int main()
{
	//declare variables
	float radius,area;
	//take input
	printf("enter radius of circle(in cm):");
	scanf("%f",&radius);
	//calculate area
	area=pi*radius*radius;
	//display result
	printf("area of circle=%.2f cm\n",area);
	return 0;
}
