
// Program menghitung Luas

#include <stdio.h>

int main(void)
{
    int pilihan;
    float sisi, panjang, lebar, alas, tinggi, hasil;

    printf("=== MENU ===\n");
    printf("1. Luas Persegi\n");
    printf("2. Luas Persegi Panjang\n");
    printf("3. Luas Segitiga\n");
    printf("4. Keluar\n");
    printf("Pilih menu: \n");

    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case 1: // Persegi
        printf("Masukkan panjang sisi: \n");
        scanf("%f", &sisi);

        hasil = sisi * sisi;
        printf("Luas persegi: %.2f \n", hasil);
        break;

    case 2: // Persegi Panjang
        printf("Masukkan panjang: \n");
        scanf("%f", &panjang);

        printf("Masukkan lebar: \n");
        scanf("%f", &lebar);

        hasil = panjang * lebar;
        printf("Luas persegi panjang: %.2f \n", hasil);
        break;

    case 3: // Segitiga
        printf("Masukkan Alas: \n");
        scanf("%f", &alas);

        printf("Masukkan Tinggi: \n");
        scanf("%f", &tinggi);

        hasil = alas * tinggi * 0.5;
        printf("Luas segitiga: %.2f \n", hasil);
        break;

    case 4: // Keluar
        printf("Anda memilih keluar \n");
        break;

    default:
        printf("Pilihan tidak valid \n");
    }
    return 0;
}