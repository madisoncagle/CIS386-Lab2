#include <stdio.h>
#include <math.h>

// (1) Floating-point equality
void compareFloats(double a, double b)
{
    printf("%f and %f\n", a, b);

    if (a == b)
    {
        printf("The numbers are equal");
    }
    else
    {
        printf("The numbers are not equal");
    }
}

// (2) Floating-point associativity

// (3) isPowerOfTwoSimple
int isPowerOfTwoSimple(unsigned int i)
{
    while ((i % 2 == 0) && i > 1)
    {
        i /= 2;
    }

    return i == 1;
}

// (3) isPowerOfTwoClever
int isPowerOfTwoClever(unsigned int i)
{
    return ((i > 0) && !(i & (i - 1)));
}

// (4) Bit shifting

int main()
{
    // printf("Power of 2 simple: %d\n", isPowerOfTwoSimple(510));
    // printf("Power of 2 clever: %d\n", isPowerOfTwoClever(64));

    double f1 = 3 * 0.3 + 0.1;
    double f2 = 1.0;

    compareFloats(f1, f2);

    return 0;
}