#include <stdio.h>

float rataRata(int a, int b, int c)
{
    float average = (float)(a + b + c) / 3;
    return average;
}

int main(void)
{
    int a, b, c;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    printf("Masukkan angka ketiga: ");
    scanf("%d", &c);

    float hasil = rataRata(a, b, c);
    printf("Rata-rata: %.2f\n", hasil);

    return 0;
}