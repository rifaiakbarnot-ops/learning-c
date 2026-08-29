#include <stdio.h>

int main(void)
{
    int angka, total = 0;

    printf("Masukkan angka anda: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        if (i % 2 == 0)
        {
            total += i;
        }
    }
    printf("%d", total);
}