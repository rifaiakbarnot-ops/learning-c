#include <stdio.h>

/*

1
12
123
1234
12345

*/

int main(void)
{

    int angka;

    printf("Masukkan angka: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
