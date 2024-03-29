#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	scanf("%d",&n);

	if (n < 0)
	{
		printf("minus\n");
		if (n % 2 == 0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	else
	{
		printf("plus\n");
		if (n % 2 == 0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}


	return 0;
}