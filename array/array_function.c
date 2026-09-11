#include <stdio.h>

int jumlah(int array[], int ukuran)
{

    int total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += array[i];
    }

    return total;
}

int terbesar(int array[], int ukuran)
{
    int terbesar = array[0];

    for (int i = 1; i < ukuran; i++)
    {
        if (array[i] > terbesar)
        {
            terbesar = array[i];
        }
    }
    return terbesar;
}

int terkecil(int array[], int ukuran)
{
    int terkecil = array[0];

    for (int i = 1; i < ukuran; i++)
    {
        if (array[i] < terkecil)
        {
            terkecil = array[i];
        }
    }

    return terkecil;
}

float rataRata(int array[], int ukuran)
{
    int total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += array[i];
    }

    float rataRata = (float)total / (float)ukuran;
    return rataRata;
}

int main(void)
{
    int angka[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    int hasilJumlah = jumlah(angka, 5);
    int hasilTerbesar = terbesar(angka, 5);
    int hasilTerkecil = terkecil(angka, 5);
    float hasilRataRata = rataRata(angka, 5);

    printf("Total Angka adalah: %d\n", hasilJumlah);
    printf("Angka terbesar dalam array adalah: %d\n", hasilTerbesar);
    printf("Angka terkecil dalam array adalah: %d\n", hasilTerkecil);
    printf("Rata-Rata array tersebut adalah: %.2f\n", hasilRataRata);

    return 0;
}