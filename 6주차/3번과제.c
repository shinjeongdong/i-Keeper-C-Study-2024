#include<stdio.h>
#include<stdlib.h>
#include <Windows.h>
#pragma warning(disable:4996)

Mymemcpy(PBYTE dst, PBYTE src, size_t size); //dst 복사 받을 메모리 src 복사를할 메모리,


int main(void) {
	int src;
	scanf("%d", &src);
	int dest = 10000;

	Mymemcpy(&dest,&src,sizeof(src));

	printf("%d", dest);
	return 0;
}


Mymemcpy(PBYTE dst, PBYTE src, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		dst[i] = src[i]; //포인터 바이트형을 이용해서 한 바이트씩 수정해준다.
	}
}
