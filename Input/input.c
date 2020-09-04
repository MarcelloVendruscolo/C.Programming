#include <stdio.h>

int computeSum(int a, int b)
{
    int sum = a + b;
    return sum;
}

float computeProduct(float a, float b)
{
    float product = a * b;
    return product;
}

void inputTwoIntegersOutputSum()
{
    int firstInt;
    int secondInt;
    printf("Give two integers: ");
    scanf("%d %d", &firstInt, &secondInt);
    int sum = computeSum(firstInt, secondInt);
    printf("You entered %d and %d, their sum is: %d\n", firstInt, secondInt, sum);
}

void inputTwoFloatsOutputProduct()
{
    float firstFloat;
    float secondFloat;
    printf("Give two floats: ");
    scanf("%f %f", &firstFloat, &secondFloat);
    float product = computeProduct(firstFloat, secondFloat);
    printf("You entered %f and %f, their product is: %f\n", firstFloat, secondFloat, product);
}

void inputWordOutputTwice()
{
    char word[199];
    printf("Give a word: ");
    scanf("%s", word);
    printf("%s %s\n", word, word);
}

int main()
{
    inputTwoIntegersOutputSum();
    inputTwoFloatsOutputProduct();
    inputWordOutputTwice();

    return 0;
}