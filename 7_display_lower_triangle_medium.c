// 7. Write a program in C to print or display the lower triangular of a given matrix.
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
    {
 if(i>=j)
    printf("%d ",a[i][j]);
     else
    printf("0 ");
    }
   
   printf("\n");

    }   
// printf("sum is %d",sum);
    return 0;
}
