#include <stdio.h>
#pragma warning(disable:4996)

int GetData(int* List);

int GetMax(int * List);

void printData(int * List, int nMax);


int main(void)
{
	int aList[3] = { 0, };
	int nMax = -9999, i = 0;

	// 입력
	
	
	GetData(aList);
	

	// 최댓값 계산
	nMax = GetMax(aList);

	// 출력
	printData(aList, nMax);
	return 0;
}



int GetData(int* aList) {

	for (int i = 0; i < 3; ++i)
	{
		printf("정수를 입력하세요. : ");
		scanf("%d", &aList[i]);
	}
}


int GetMax(int * aList) {
	int nMax = aList[0];
	for(int i = 1; i < 3; ++i)
	{
		if(aList[i] > nMax)
		{
			nMax = aList[i];
		}
	}
	return nMax;
}




void printData(int * aList, int nMax)
{
	printf("%d, %d, %d 중 가장 큰 수는 %d 입니다. \n", aList[0], aList[1], aList[2], nMax);
	return 0;
}
