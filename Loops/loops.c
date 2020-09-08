#include <stdio.h>

void printEvenNumbersBetween(int first_int, int second_int)
{
    printf("Even numbers between %d and %d:\n", first_int, second_int);
    while (first_int <= second_int) 
    {
        printf("%d ", first_int);
        first_int = first_int + 2;
    }
    printf("\n");
}

void printAlignedTableFromNumberTo(int first_int, int second_int)
{
    printf("Numbers %d to %d:\n", first_int, second_int);
    for (int i = first_int; i < second_int; i = i + 10)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ", first_int);
            first_int = first_int + 1;
        }
        printf("\n");
    }
}

void printSquareOf(int a_number)
{
    int squared_number = (a_number * a_number);
    printf("The square of %d is %d\n", a_number, squared_number);
}


int main()
{
    printEvenNumbersBetween(0,40);
    printAlignedTableFromNumberTo(1,100);
    int input_number;
    do {
        printf("Give a number: ");
        scanf("%d", &input_number);
        if (input_number != 0)
            printSquareOf(input_number);
        else
        printf("You entered zero.\n");
    } while (input_number != 0);
}