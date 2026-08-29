#include <stdio.h>

int main(void)
{
    int angka;

    printf("Masukkan angka anda: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}