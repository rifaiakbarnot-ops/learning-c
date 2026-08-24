#include <stdio.h>

int main(void)
{
    int number;

    printf("This is Number Parity Checker.\n");
    printf("Enter your number: \n");

    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("Your number is even.");
    }
    else
    {
        printf("Your number is odd.");
    }
}