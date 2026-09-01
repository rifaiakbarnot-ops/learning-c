#include <stdio.h>

/*

Jumlah angka: 5

Angka ke-1: 12
Angka ke-2: 7
Angka ke-3: 25
Angka ke-4: 4
Angka ke-5: 18

Terbesar = 25
Terkecil = 4
Total = 66
Rata-rata = 13.20
Genap = 3
Ganjil = 2

*/
int main(void)
{
    int jumlah, angka, terbesar, terkecil = 0, total = 0, genap = 0, ganjil = 0;
    float rata_rata;

    printf("Masukkan jumlah angka yang ingin diinput: \n");
    scanf("%d", &jumlah);

    printf("Masukkan angka pertama: \n");
    scanf("%d", &terbesar);

    if (terbesar % 2 == 0)
    {
        genap++;
        total += terbesar;
    }
    else
    {
        ganjil++;
        total += terbesar;
    }
    for (int i = 2; i <= jumlah; i++)
    {
        printf("Masukkan angka ke-%d \n", i);
        scanf("%d", &angka);
        if (angka >= terbesar)
        {
            terbesar = angka;
            if (angka % 2 == 0)
            {
                genap++;
                total += angka;
            }
            else
            {
                ganjil++;
                total += angka;
            }
        }
        else
        {
            terkecil = angka;
            total += angka;
            if (angka % 2 == 0)
            {
                genap++;
            }
            else
            {
                ganjil++;
            }
        }
    }
    rata_rata = (float)total / jumlah;
    printf("Angka terbesar adalah %d, dan angka terkecil adalah %d \n", terbesar, terkecil);
    printf("Total semua angka adalah %d, dan rata-ratanya %.2f \n", total, rata_rata);
    printf("Terdapat %d angka genap dan %d angka ganjil \n", genap, ganjil);

    return 0;
}