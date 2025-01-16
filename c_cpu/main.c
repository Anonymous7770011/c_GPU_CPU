#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void multi()
{

	int n[4];
	int temp = 0;
	printf("Mtrix Multiplication for Only Two Matrxes as input \n");
	printf("Enter the Size of both matrix  \n");
	scanf("%d %d %d %d", &n[0], &n[1],&n[2],&n[3]);
	


	int **a = (int **)malloc(n[0] * sizeof(int));
	int **b = (int **)malloc(n[2] * sizeof(int));
	int **c = (int **)malloc(n[0] * sizeof(int));
	for (int i = 0; i < n[0]; i++)
	{
		 a[i] = (int *)malloc(n[1] * sizeof(int));
	}

	for (int i = 0; i < n[2]; i++)
	{
		b[i] = (int*)malloc(n[3] * sizeof(int));
	}
	for (int i = 0; i < n[0]; i++)
	{
		c[i] = (int*)malloc(n[3] * sizeof(int));
	}
	temp = 0;
	for (int i = 0; i < n[0]; i++)
	{
		for (int j = 0; j < n[1]; j++)
		{
			temp = temp + 1;
			a[i][j] = temp;

		}

	}
	temp = 0;
	for (int i = 0; i < n[2]; i++)
	{
		for (int j = 0; j < n[3]; j++)
		{
			temp = temp + 1;
			b[i][j] = temp;

		}

	}
	printf("The Matrix A \n");
	for (int i = 0; i < n[0]; i++)
	{
		for (int j = 0; j < n[1]; j++)
		{
			printf("%d ", a[i][j]);

		}
		printf("\n");

	}
	printf("The Matrix B \n");
	for (int i = 0; i < n[2]; i++)
	{
		for (int j = 0; j < n[3]; j++)
		{
			printf("%d ", b[i][j]);

		}
		printf("\n");

	}
	for (int i = 0; i < n[0]; i++)
	{
		for (int j = 0; j < n[3]; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n[1]; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}

		}
	}
	printf("\n");
	printf("Result Matrix \n");
	for (int i = 0; i < n[0]; i++)
	{
		for (int j = 0; j < n[3]; j++)
		{
			printf("%d ", c[i][j]);

		}
		printf("\n");

	}
	printf("\n");


}
int main()
{
	while (true)
	{
		multi();
	}
	return 0;
}
