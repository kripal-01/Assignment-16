// 10. Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{

   int i,j,k,a[3][3],sum,ne=0;

printf("enter the value of matrix one\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
 scanf("%d",&a[i][j]);
 
    }
   
  
}


printf("-------------------------\n\n");

for(i=0;i<3;i++)
{
	sum=0;
    for(j=0;j<3;j++)
    {
 if(a[i][j]==1)
 sum+=a[i][j];
    }
    if(sum>ne)
 printf("max no. of 1s in row : %d",i+1);
 ne=sum;
//   printf("\nsum of 1s in row %d is %d",i,sum);

    } 
//	if(count<(3*3)/2)  
//	printf("matrix is sparce ");
// printf("sum is %d",sum);
    return 0;
}
