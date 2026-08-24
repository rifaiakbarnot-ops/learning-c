#include <stdio.h>

int main(void)
{
    int point;

    printf("Enter Your Number: \n");
    scanf("%d", &point);

    if (point < 80)
    {
        printf("You did not pass");
    }
    else if (point > 80)
    {
        printf("You did pass");
    }
    else
    {
        printf("You almost passed");
    }
}
