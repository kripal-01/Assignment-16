// 3. Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{

   int i,j,a[3][3];

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
printf("transpose is : \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    printf("%d ",a[j][i]);
    printf("\n");
}


    return 0;
}
