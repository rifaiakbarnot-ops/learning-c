#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter Your Grades: \n");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100)
    {
        if (grade >= 90)
        {
            printf("Grade A");
        }
        else if (grade >= 80)
        {
            printf("Grade B");
        }
        else if (grade >= 70)
        {
            printf("Grade C");
        }
        else if (grade >= 60)
        {
            printf("Grade D");
        }
        else
        {
            printf("Grade E");
        }
    }
    else
    {
        printf("Grade Invalid");
    }
}
