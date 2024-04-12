#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9];
    int max = 0;
    int index = 0;
    max = arr[0];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 9; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }

    printf("%d\n",max);
    printf("%d", index + 1);
    
    return 0;
}
