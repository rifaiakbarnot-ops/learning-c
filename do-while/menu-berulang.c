
// Program menu berulang

#include <stdio.h>

int main(void)
{

    int pilihan, angka;

    do
    {
        printf("\n=== MENU ===\n");
        printf("1. Sapa\n");
        printf("2. Tampilkan angka\n");
        printf("3. Keluar\n");

        printf("\nPilih menu: \n");
        scanf("%d", &pilihan);

        switch (pilihan)
        {

        case 1:

            printf("Hallo! Selamat Belajar C!\n");
            break;

        case 2:

            printf("Masukkan angka: \n");
            scanf("%d", &angka);
            printf("Angka kamu adalah: %d\n", angka);
            break;

        case 3:

            printf("Anda memilih keluar.\n");
            break;

        default:

            printf("Pilihan invalid.\n");
        }
    }

    while (pilihan != 3);

    return 0;
}