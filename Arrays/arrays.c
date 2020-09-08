#include <stdio.h>

int countZeros(int an_array[], int sizeOfArray)
{
    //printf("%d %d %d %d %d %d %d %d %d %d", an_array[0], an_array[1], an_array[2], an_array[3], an_array[4], an_array[5],an_array[6], an_array[7], an_array[8], an_array[9]);
    int counter = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (an_array[i] == 0)
            counter = counter + 1;
    }
    return counter;
}

void printArray(int an_array[], int sizeOfArray)
{
    printf("{ ");
    for (int i = 0; i < sizeOfArray; i++) 
    {
        printf("%d", an_array[i]);
        if (i != sizeOfArray - 1)
        {
            printf(", ");
        }
    }
    printf(" }\n");
}

void tripleMyArray(int an_array[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        an_array[i] = an_array[i] * 3;
    }
}

int main()
{
    int given_array[10];
    int size_array = 10;

    printf("Input 10 numbers: Initial array: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &given_array[0], &given_array[1], &given_array[2], &given_array[3], &given_array[4], &given_array[5], &given_array[6], &given_array[7], &given_array[8], &given_array[9]);
    printArray(given_array, size_array);
    int number_zeros = countZeros(given_array, size_array);
    printf("Number of 0's: %d\n", number_zeros);
    int *ptr = given_array;
    tripleMyArray(ptr, size_array);
    printf("Tripled array: ");
    printArray(given_array, size_array);

    return 0;
}