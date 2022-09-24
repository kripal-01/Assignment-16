// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{

   int i,j,k,a[3][3],count=0;

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
 if(a[i][j]==0)
 count++;


    }
   
   printf("\n");

    } 
	if(count>(3*3)/2)  
	printf("matrix is sparce ");
// printf("sum is %d",sum);
    return 0;
}
