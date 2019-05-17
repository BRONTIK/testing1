/*#include<stdio.h>
#include<math.h>


int korenb(int a, int b, int c, double *x1, double *x2)
{
    double diskr;
    printf("Ваше уравнение: %dx^2 + (%d)x + %d\n", a, b, c);
    diskr = b * b - 4 * a * c;
    if(a != 0)
    {
        if(diskr > 0)
        {
            *x1 = -(b + sqrt(diskr)) / (2 * a);
            *x2 = -(b - sqrt(diskr)) / (2 * a);
            return 2;
        }

        if(!diskr)
        {
            *x1 = -b / (2 * a);
            return 1;
        }
        else
            return 0;
    }
    else
    {
        printf("Это не квадратное уравнение, так как a = 0\n");
        return 3;
    }
}*/
