#include <stdio.h>

// (1) Floating-point equality

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

    float f1 = 1.6666666666;
    float f2 = 3.3333333333;

    float sum = f1 + f2;
    float five = (float)5.0;

    printf("%f + %f = %f\n", f1, f2, sum);

    if (sum == five)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }

    return 0;
}