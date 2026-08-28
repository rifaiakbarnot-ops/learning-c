#include <stdio.h>

/*

*
**
***
****
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

    for (int i = 1; i <= angka * 2 - 1; i++)
    {
        if (i <= angka) // Bintang Bertambah
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int k = 1; k <= angka * 2 - i; k++) // i = 6, angka = 5, k harus = 4
            {
                printf("*");
            }
        }

        printf("\n");
    }
}