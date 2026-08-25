#include <stdio.h>

int main(void)
{

    int angka;

    printf("Masukkan angka anda: \n");
    scanf("%d", &angka);

    for (int i = 0; i <= angka; i++)
    {
        printf("%d\n", i);
    }
}