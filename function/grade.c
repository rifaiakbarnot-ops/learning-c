#include <stdio.h>

char grade(int nilai)
{
    if (nilai < 0 || nilai > 100)
    {
        return 'X';
    }
    else if (nilai >= 90)
    {
        return 'A';
    }
    else if (nilai >= 80)
    {
        return 'B';
    }
    else if (nilai >= 70)
    {
        return 'C';
    }
    else if (nilai >= 60)
    {
        return 'D';
    }
    else
    {
        return 'E';
    }
}

int main(void)
{
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    char hasil = grade(nilai);
    printf("Grade: %c\n", hasil);

    return 0;
}