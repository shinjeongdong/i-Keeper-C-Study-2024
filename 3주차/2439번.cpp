#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        for (int j = a; j > i + 1; j--)
        {
            printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
