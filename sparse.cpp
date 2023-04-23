#include<stdio.h>
int main()
{
	int i,j,a[100][100],row,col,counter=0;
	printf("enter the number of rows\n");
	scanf("%d",&row);
	printf("enter the number of columns\n");
	scanf("%d",&col);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the given matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
			if(j==col-1)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==0)
			{
				counter=counter+1;
			}
		}
	}
	if(counter>(row*col)/2)
	{
		printf("matrix is sparse matrix\n");
	}
	else
	{
		printf("matrix is not sparse\n");
	}
	return 0;
}
