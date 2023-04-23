#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the elements of the matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}
	printf("the sum of the opposite elements of the diagonal elements is-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("%d",sum);
	return 0;
}
