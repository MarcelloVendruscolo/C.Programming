#include <stdio.h>

void fromOneToNumber(int a_number)
{
    for (int i = 1; i <= a_number; i++)
        printf("%d\n", i);
}

int main()
{
    int given_number;
    char answer[1];
    do {
        printf("Give a number: ");
        scanf("%d", &given_number);
        fromOneToNumber(given_number);
        printf("Run again (y/n)? ");
        scanf("%s", answer);
    } while (answer[0] == 'y');
    printf("Exiting...\n");
}