#include <stdio.h>

int main(void)
{
    int angka, jumlah, terbesar;

    printf("Berapa angka yang ingin anda bandingkan: \n");
    scanf("%d", &jumlah);

    printf("Masukkan angka ke 1\n");
    scanf("%d", &terbesar);

    for (int i = 2; i <= jumlah; i++)
    {
        printf("Masukkan angka ke %d\n", i);
        scanf("%d", &angka);
        if (angka > terbesar)
        {
            terbesar = angka;
        }
    }
    printf("Angka terbesar adalah: \n%d", terbesar);
}