#include <stdio.h>

int luasPersegiPanjang(int p, int l)
{
    int luas = p * l;
    return luas;
}
int main(void)
{
    int panjang, lebar;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);

    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    int hasil = luasPersegiPanjang(panjang, lebar);
    printf("Luas: %d\n", hasil);

    return 0;
}