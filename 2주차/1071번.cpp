#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

    int n;
    reload:
        scanf("%d", &n);
        if (n != 0)printf("%d\n", n);
        if (n != 0) goto reload;




    return 0;
}