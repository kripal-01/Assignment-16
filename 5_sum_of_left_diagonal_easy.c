// 5. Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>
int main()
{

   int i,j,k,a[3][3],sum=0;

printf("enter the value of matrix one\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
 scanf("%d",&a[i][j]);
 
    }
   
    printf("\n");
}


printf("-------------------------\n\n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    if(i+j==2)
    sum+=a[i][j];

    }   
printf("sum is %d",sum);
    return 0;
}
