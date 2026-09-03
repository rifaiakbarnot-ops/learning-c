#include <stdio.h>

int tambah(int a, int b)
{
    return a + b;
}

int kali(int a, int b)
{
    return a * b;
}

int main(void)
{
    int a, b;

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    int pertambahan = tambah(a, b);
    printf("%d\n", pertambahan);

    int perkalian = kali(a, b);
    printf("%d", perkalian);

    return 0;
}