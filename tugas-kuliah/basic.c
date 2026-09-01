#include <stdio.h>

int main(void)
{

    float phi = 3.14, luas_lingkaran;
    int jari_jari;

    printf("Masukkan jari_jari: \n");
    scanf("%d", &jari_jari);

    luas_lingkaran = phi * jari_jari * jari_jari;
    printf("Luas lingkaran adalah: %.2f", luas_lingkaran);

    return 0;
}