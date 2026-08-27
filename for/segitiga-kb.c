#include <stdio.h>

/*

*****
****
***
**
*

*/
int main(void)
{

    int angka;
    printf("Masukkan angka: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++) // Baris
    {
        for (int j = 1; j <= angka - i + 1; j++) // Banyak bintang
        {
            printf("*");
        }
        printf("\n");
    }
}