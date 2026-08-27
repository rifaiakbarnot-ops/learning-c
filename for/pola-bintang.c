#include <stdio.h>

/*

Membuat Pola Bintang:

*
**
***
****
*****

Alur Kerja:

i = 1 → baris 1
i = 2 → baris 2
i = 3 → baris 3
i = 4 → baris 4
i = 5 → baris 5

i = 1 → j sampai 1 → *
i = 2 → j sampai 2 → **
i = 3 → j sampai 3 → ***
i = 4 → j sampai 4 → ****
i = 5 → j sampai 5 → *****

*/

int main(void)
{
    int angka;

    printf("Masukkan jumlah baris bintang: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++) // Loop pertama yang menerima banyak baris kebawah
    {
        for (int j = 1; j <= i; j++) // Loop kedua yang mencetak bintang ke kanan
        {
            printf("*"); // Mencetak banyak bintang dalam for loop kedua
        }
        printf("\n"); // Memindahkan ke baris selanjutnya setelah baris loop ini selesai dicetak
    }
    return 0;
}
