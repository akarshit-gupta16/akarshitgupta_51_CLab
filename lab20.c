#include<stdio.h>
int main(){
int main()
{
	int a[10][10], b[10][10], c[10][10];
	int arow, brow, acol, bcol, i, j, k, sum = 0;
	printf("enter the no of rows of matrix a :");
	scanf("%d", &arow);
	printf("enter the no of columns of matrix a :");
	scanf("%d", &acol);
	printf("enter the elements of a:\n");
		for(i = 0; i<arow; i++)
		{
			for(j=0; j<acol; j++)
			{
				printf("a[%d][%d]= \n", i, j, a[i][j]);
				scanf("%d", &a[i][j]);
			}
		}
	printf("\n");
	printf("enter the no of rows of matrix b :");
	scanf("%d", &brow);
	printf("enter the no of columns of matrix b :");
	scanf("%d", &bcol);
	if(brow!=acol) 
	{
		printf("please enter valid input\n");
	return -1;
	}
	else
	{
		printf("enter the elements of matrix b:\n");
		for(i = 0; i<brow; i++)
		{
			for(j=0; j<bcol; j++)
			{
				printf("b[%d][%d]= \n", i, j, b[i][j]);
				scanf("%d", &b[i][j]);
			}
		}
		printf("\n");
	}
		for(i = 0; i<arow; i++)
		{
			for(j=0; j<bcol; j++)
			{
				for(k=0; k<acol; k++)
				{	
					sum += a[i][k] * b[k][j];
				}
				c[i][j] = sum;
				sum = 0;
			}
		}
	printf("result matrix\n");
	for(i = 0; i<arow; i++)
	{
		for(j=0; j<bcol; j++)
		{
			printf("c[%d][%d]=%d\n",i, j, c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
    return 0;
}