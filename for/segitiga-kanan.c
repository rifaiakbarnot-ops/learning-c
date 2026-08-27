#include <stdio.h>

/*

    *
   **
  ***
 ****
*****

i = 1 → 4 spasi + 1 bintang
i = 2 → 3 spasi + 2 bintang
i = 3 → 2 spasi + 3 bintang
i = 4 → 1 spasi + 4 bintang
i = 5 → 0 spasi + 5 bintang

*/
int main(void)
{
    int angka;

    printf("Masukkan angka: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++) // Banyak baris
    {
        for (int j = 1; j <= angka - i; j++) // Banyak spasi
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) // Banyak bintang
        {
            printf("*");
        }
        printf("\n");
    }
}