#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principal amount(p):");
	scanf("%f",&p);
	printf("enter time in year(t):");
	scanf("%f",&t);
	printf("enter rate in percent(r):");
	scanf("%f",&r);
	/*caluclating simple interest */
	si=p*t*r/100;
	/*calculating compound interest */
	ci=p*(pow(1+r/100,t)-1);
	printf("simple interest=%0.3f\n",si);
	printf("compund interest=%0.3f",ci);
	return 0;
}
