// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{

   int i,j,k,a[3][3],b[3][3],c[3][3];

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
printf("multiplication is is : \n");

for(i=0;i<3;i++)
{
		
	for(j=0;j<3;j++)
	{
		c[i][j]=0;
		for(k=0;k<3;k++)
		c[i][j]+=a[i][k]*b[k][j];
		printf("%d ",c[i][j]);
	
	}
	
	printf("\n");
	
}



    return 0;
}
