#include <stdio.h>

int main(void)
{
    int angka;

    printf("Masukkan angka anda: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        for (int j = 1; j <= angka - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}