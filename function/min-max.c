#include <stdio.h>

void minmax(int a, int b, int c)
{
    int terbesar, terkecil;

    terbesar = a;
    terkecil = a;

    if (b > terbesar)
    {
        terbesar = b;
    }
    if (b < terkecil)
    {
        terkecil = b;
    }
    if (c > terbesar)
    {
        terbesar = c;
    }
    if (c < terkecil)
    {
        terkecil = c;
    }

    printf("Angka terkecil adalah %d, dan terbesar adalah %d", terkecil, terbesar);
}

int main(void)
{
    int angka1, angka2, angka3;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    printf("Masukkan angka ketiga: ");
    scanf("%d", &angka3);

    minmax(angka1, angka2, angka3);

    return 0;
}