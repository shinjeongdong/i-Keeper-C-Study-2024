#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	double fee = 1000;
	int age;

	scanf("%d", &age);

	if (0 <= age && age <= 3)
	{
		printf("최종 요금 : %.0lf원",(fee * (1 - 1)));
	}
	else if (4 <= age && age <= 13)
	{
		printf("최종 요금 : %.0lf원",fee * (1 - 0.5));
	}
	else if (14 <= age && age <= 19)
	{
		printf("최종 요금 : %.0lf원", fee * (1 - 0.25));
	}
	else if (20 <= age && age <= 64)
	{
		printf("최종 요금 : %.0lf원", fee);
	}
	else if (65 <= age)
	{
		printf("최종 요금 : %.0lf원", (fee * (1 - 1)));
	}

	return 0;
}