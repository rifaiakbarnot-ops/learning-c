#include <stdio.h>

int main(void)
{
    int angka;

    printf("Masukkan jumlah panjang dan lebar persegi: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        for (int j = 1; j <= angka; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}