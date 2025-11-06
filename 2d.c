#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter Temp in fahrenheit:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("temperature in celsius:%.2f",celsius);
	return 0;
}
