#include <stdio.h>

void cekGenap(int angka)
{
    if (angka % 2 == 0)
    {
        printf("Angka genap");
    }
    else
    {
        printf("Angka ganjil");
    }
}

int main(void)
{
    int angka;

    printf("Masukkan angka anda: ");
    scanf("%d", &angka);

    cekGenap(angka);

    return 0;
}