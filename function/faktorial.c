#include <stdio.h>

int faktorial(int a)
{
    int total = 1;
    for (int i = 1; i <= a; i++)

        total *= i;
    return total;
}

int main(void)
{
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    int hasil = faktorial(angka);
    printf("Hasil faktorial dari %d, adalah %d", angka, hasil);

    return 0;
}
