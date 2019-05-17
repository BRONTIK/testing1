#include <stdio.h>

#include "myfunc.h"

int main()
{
    int a, b, c;
    double x1 = 0, x2 = 0;
    scanf("%d %d %d", &a, &b, &c);
    search(a, b, c, &x1, &x2);

    return 0;
}

