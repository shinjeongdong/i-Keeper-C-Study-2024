#include <stdio.h>
#pragma warning(disable:4996)

int main(void) {
	int score = 0;

	scanf("%d", &score);
	
	
	
	if (score >= 90 && score <= 100) {
		printf("A\n");
	}
	else if (score >= 70 && score <= 89) {
		printf("B\n");
	}
	else if (score >= 40 && score <= 69) {
		printf("C\n");
	}
	else {
		printf("D\n");
	}

	return 0;
}