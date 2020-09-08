#include <stdio.h>

int computeSum(int first_int, int second_int)
{
    return first_int + second_int;
}

int computeSubtraction(int first_int, int second_int)
{
    return first_int - second_int;
}

int computeMultiplication(int first_int, int second_int)
{
    return first_int * second_int;
}

int computeDivision(int first_int, int second_int)
{
    if (second_int != 0)
        return first_int / second_int;
    else
    {
        printf("Not possible to divide by 0\n");
        return 0;
    }
}

int main() 
{
    int a_int;
    int b_int;

    printf("Give a: ");
    scanf("%d", &a_int);
    printf("Give b: ");
    scanf("%d", &b_int);

    int sum = computeSum(a_int, b_int);
    int sub = computeSubtraction(a_int, b_int);
    int product = computeMultiplication(a_int, b_int);
    int division = computeDivision(a_int, b_int);

    printf("%d + %d = %d\n", a_int, b_int, sum);
    printf("%d - %d = %d\n", a_int, b_int, sub);
    printf("%d * %d = %d\n", a_int, b_int, product);
    printf("%d / %d = %d\n", a_int, b_int, division);
    
    return 0;
}