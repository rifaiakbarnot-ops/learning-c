#include <stdio.h>

float hargaDiskon(float harga, float diskon)
{
    float potongan = harga * diskon / 100;
    float hargaAkhir = harga - potongan;
    return hargaAkhir;
}

int main(void)
{
    float harga, diskon;

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    printf("Masukkan diskon (%): ");
    scanf("%f", &diskon);

    float hasil = hargaDiskon(harga, diskon);
    printf("Harga setelah diskon = %.2f", hasil);

    return 0;
}