#include <stdio.h>
#pragma warning(disable:4996)
double GetFee(double f, int age);

int main()
{
	int age; 
	double fee;
	scanf("%lf %d", &fee, &age);

	printf("%.2lf",GetFee(fee,age));

	return 1;
}

double GetFee(double f, int age)
{
	double fee;
	if (0 <= age && age <= 3)
	{
		return fee = f * 0;
	}
	else if (4 <= age && age <= 13)
	{
		return fee = f * 0.5;
	}
	else if (14 <= age && age <= 19)
	{
		return fee = f * 0.25;
	}
	else if (age >= 20)
	{
		return fee = f;
	}
}
