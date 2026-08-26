#include <stdio.h>

int main(void)
{
    int angka;
    int total = 0;

    printf("Masukkan angka yang ingin dicari akumulasinya dari 1: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
        total += i;
    printf("Total: %d", total);

    return 0;
}