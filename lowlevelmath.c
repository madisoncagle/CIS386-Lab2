#include <stdio.h>
#include <math.h>

// (1) Floating-point equality
void compareFloats(double a, double b)
{
    printf("%f and %f\n", a, b);

    if (a == b)
    {
        printf("The numbers are equal\n");
    }
    else
    {
        printf("The numbers are not equal\n");
    }
}

// (2) Floating-point associativity
void associativeAdd(double a, double b, double c)
{
    int sum1 = (a + b) + c;
    int sum2 = a + (b + c);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("Sum1 = %d\n", sum1);
    printf("Sum2 = %d\n", sum2);
}

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
    // 1
    printf("1. Floating point equality\n");
    double f1 = 3 * 0.3 + 0.1;
    double f2 = 1.0;
    compareFloats(f1, f2);
    printf("\n");

    // 2
    printf("2. Floating point associativity\n");
    associativeAdd(2e187, -2e187, 3);
    printf("\n");

    // 3
    printf("3. Power of two\n");
    printf("Power of 2 simple: %d\n", isPowerOfTwoSimple(510));
    printf("Power of 2 clever: %d\n", isPowerOfTwoClever(64));
    printf("\n");

    return 0;
}