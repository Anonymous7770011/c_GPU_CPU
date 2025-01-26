#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void generate(int n)
{
	long a = 0;
	long b = 1;
	long c;
	for (int i = 0; i <= n; i++)
	{
		
		printf("%l\n", a); 
		c = a + b;
		a = b;
		b = c;
	}

}
int main()
{
	int n;
	printf("Start....");
	while (true)
	{
		printf("\nEnter length or 0 to Stop : ");
		scanf("%d", &n);
		if (n == 0)
		{
			printf("Break...\n");
			return 0;
		}
		generate(n);

	}
	return 0;
}