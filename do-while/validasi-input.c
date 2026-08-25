
// Program pengecekan ke-valid an angka

#include <stdio.h>

int main(void)
{

    int angka;

    do
    {
        printf("Masukkan angka 1-10: \n");
        scanf("%d", &angka);

        if (angka <= 10 && angka > 0)
        {
            // Menjalankan print jika angka yang dimasukkan valid (1-10)
            printf("Angka yang dimasukkan: %d", angka);
            // Mengakhiri program pengecekan angka karena angka valid (1-10)
            break;
        }
        else
        {
            // Menjalankan print jika angka yang dimasukkan bukan 1-10
            printf("Angka yang dimasukkan invalid.\n");
        }
    }

    // Program dijalankan lagi selama angka yang dimasukkan invalid
    while (angka <= 0 || angka > 10);
}