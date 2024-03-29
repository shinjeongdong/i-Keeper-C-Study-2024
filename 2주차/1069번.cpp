#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	char a;
	scanf("%c", &a);

	switch (a)
	{
	case 'A':
		printf("best!!!\n");
		break;
	case 'B':
		printf("good!!\n");
		break;
	case 'C':
		printf("run!\n");
		break;
	case 'D':
		printf("slowly~\n");
		break;
	
	default:
		printf("what?");
		break;
	}

	return 0;
}