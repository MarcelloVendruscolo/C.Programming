#include <stdio.h>

int inputInteger()
{
    int inputInteger;
    printf("Give an integer: ");
    scanf("%d", &inputInteger);
    return inputInteger;
}

void isIntegerZero(int integer)
{
    if(integer == 0)
        printf("The number you entered equals zero\n");
    else
        printf("The number you entered does not equal zero\n");
}

float* inputFloats(float *floats_array)
{
    printf("Give two floats: ");
    scanf("%f %f", &floats_array[0], &floats_array[1]);
    return floats_array;
}

void largestFloat(float a, float b)
{
    if(a > b)
        printf("%f is the largest\n",a);
    else
        printf("%f is the largest\n",b);
}

void divideIntegerBy2(int a)
{
    int division = a / 2;
    printf("Result is: %d\n", division);
}

void multiplyIntegerBy3(int a)
{
    int product = a * 3;
    printf("Result is: %d\n", product);
}

void areAnyOfIntegersEqual()
{
    int firstInt;
    int secondInt;
    int thirdInt;
    printf("Give three integers: ");
    scanf("%d %d %d", &firstInt, &secondInt, &thirdInt);

    if (firstInt == secondInt | secondInt == thirdInt | firstInt == thirdInt)
        printf("Some numbers are equal\n");
    else
        printf("All are unique\n");
}

int main(void)
{
    int an_integer = inputInteger();
    isIntegerZero(an_integer);
    float floats_array[2]; 
    inputFloats(floats_array);
    largestFloat(floats_array[0], floats_array[1]);
    an_integer = inputInteger();
    if (an_integer % 2 == 0)
        divideIntegerBy2(an_integer);
    else
        multiplyIntegerBy3(an_integer);
    areAnyOfIntegersEqual();

    return 0;
}