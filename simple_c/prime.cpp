#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int checkprime(int n)
{
	for (int j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 1;
		}
		return 0;
	}
}
int first()
{
	int a;
	printf("Start....");
	while (true)
	{
		printf("\nEnter length or 0 to Stop : ");
		scanf("%d", &a);
		if (a == 0)
		{
			printf("Break...\n");
			return 0;
		}
		for (int i = 1; i <= a; i++)
		{
			if (checkprime(i) == 0)
			{
				printf("Prime %d \n", i);
			}
		}

	}

}
