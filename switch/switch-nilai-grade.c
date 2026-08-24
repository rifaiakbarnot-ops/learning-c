#include <stdio.h>

int main(void)
{
    char grade;

    printf("Masukkan grading nilai (A,B,C,D,E): \n");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Sangat Baik");
        break;

    case 'B':
        printf("Baik");
        break;

    case 'C':
        printf("Cukup");
        break;

    case 'D':
        printf("Kurang");
        break;

    case 'E':
        printf("Sangat Kurang");
        break;

    default:
        printf("Nilai tidak valid");
        break;
    }

    return 0;
}