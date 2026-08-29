#include <stdio.h>

int main(void)
{

    int angka, ganjil = 0, genap = 0, total = 0, jumlah;
    float rata_rata = 0;

    printf("Masukkan jumlah angka yang ingin anda cek ganjil genap-nya: \n");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++)
    {
        printf("Masukkan angka ke-%d\n", i);
        scanf("%d", &angka);

        if (angka % 2 == 0)
        {
            genap++;
        }
        else
        {
            ganjil++;
        }
        total += angka;
    }
    rata_rata = (float)total / jumlah;
    printf("Jumlah ganjil adalah:%d \n", ganjil);
    printf("Jumlah genap adalah:%d \n", genap);
    printf("Jumlah total keduanya:%d \n", total);
    printf("Rata-Ratanya adalah:%.2f \n", rata_rata);
}