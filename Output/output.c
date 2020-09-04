#include <stdio.h>

int printString(void)
{
    int number_fifty = 50;
    printf("One half is %d%%\n", number_fifty);
    return 0;
}

int printSubtractionResult(int a, int b)
{
    int difference = a - b;
    printf("The difference between %d and %d is %d\n", a, b, difference);
    return 0;
}

int printDivisionResult(float a, float b)
{
    float division = a / b;
    printf("%f / %f is %f\n", a, b, division);
    return 0;
}

int main(void) {
    int first_int = 50;
    int second_int = 30;
    float first_float = 30.54;
    float second_float = 3123.323;

    printString();
    printSubtractionResult(first_int, second_int);
    printDivisionResult(first_float, second_float);

    return 0;
}