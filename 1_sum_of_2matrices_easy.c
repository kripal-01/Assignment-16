// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{

   int i,j,a[3][3],b[3][3];

printf("enter the value of matrix one\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
 scanf("%d",&a[i][j]);
 
    }
   
    printf("\n");
}

printf("\nenter the value of matrix second\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("\n");
}
printf("-------------------------\n\n");
printf("addition is : \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("%d ",a[i][j]+b[i][j]);
    printf("\n");
}


    return 0;
}
