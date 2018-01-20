#include <stdio.h>
#include <math.h>
float fun(float x1);

int main(void)
{
    float ro;
    ro = fun(0.0);
    printf("ro=%f", ro);
}

float fun( float x1)
{
    float x0;
    x0 = x1;
    x1 = cos(x0);
    if (fabs(x0 - x1) < 0.000001)
    {
        return x1;  
    }
    else
    {
        return fun(x1);
    }
}
