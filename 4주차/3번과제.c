#include <stdio.h>

int main(void)
{
	int aList[3][4] = { // 열에 있는 0 1 2 인덱스의 원소의 총합을 3번 인덱스에다가 저장한다.
		{10,20,30},
		{40,50,60} // 마지막 2번 행은 각 열의 총합이 2번 행에 속한 요소에 저장되도록 합니다.
	};

	int i = 0, j = 0;


	// 여기에 들어갈 코드 작성

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j) // 3번 인덱스에 총합 저장하는 코드
			aList[i][3] += aList[i][j];
	}

	for (j = 0; j < 4; j++) {

		for (i = 0; i < 2; i++)
		{

			aList[2][j] += aList[i][j];

		}
	}

	///////////////////////////////////////////////////

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
			printf("%d\t", aList[i][j]);

		putchar('\n');
	}
	return 0;
}
