#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("enter the elements of A matrix:");
	 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&a[i][j]);
 	 }
 }
 	printf("\n the elements of matrix A:\n");
	 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",a[i][j]);
 	 }
 	 printf("\n");
 }
 printf("enter the elements of B matrix:");
	 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  scanf("%d",&b[i][j]);
 	 }
 } 
 printf("\n the elements of matrix B:\n");
	 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",b[i][j]);
 	 }
 	 printf("\n");
 }
  printf("Logic of sub of two matrix:");
 for(i=0;i<2;i++)
 {
 	for(j=0;j<2;j++)
 	{
 		c[i][j]=a[i][j]-b[i][j];
	 }
	 printf("\n");
 }
 printf("\n the elements of matrix c:\n");
	 for(i=0;i<2;i++)
 {
  	for(j=0;j<2;j++)
 	 {
 	  printf("%d \t",c[i][j]);
 	 }
 	 printf("\n");
 }
  
}
