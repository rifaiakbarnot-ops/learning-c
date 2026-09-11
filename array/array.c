#include <stdio.h>

int main(void)
{
    int angka[5];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    int terbesar = angka[0];
    int terkecil = angka[0];

    for (int i = 0; i < 5; i++)
    {
        if (angka[i] > terbesar)
        {
            terbesar = angka[i];
        }

        if (angka[i] < terkecil)
        {
            terkecil = angka[i];
        }
        total += angka[i];
    }

    float rataRata = (float)total / 5;
    printf("Jumlah dan rata-rata kelima angka adalah %d dan %.2f \n", total, rataRata);
    printf("Angka terbesar adalah %d dan angka terkecil adalah %d\n", terbesar, terkecil);

    return 0;
}