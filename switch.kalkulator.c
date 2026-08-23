#include <stdio.h>

int main(void)
{
    int angka1, angka2;
    char operator;
    float hasil;

    printf("Masukkan angka pertama: \n");
    scanf("%d", &angka1);

    printf("Masukkan operator (+, -, *, /): \n");
    scanf(" %c", &operator);

    printf("Masukkan angka kedua: \n");
    scanf("%d", &angka2);

    switch (operator)
    {
    case '+':
        hasil = angka1 + angka2;
        printf("Hasil dari penjumlahan adalah: %.2f", hasil);
        break;

    case '-':
        hasil = angka1 - angka2;
        printf("Hasil dari pengurangan adalah: %.2f", hasil);
        break;

    case '*':
        hasil = angka1 * angka2;
        printf("Hasil dari perkalian adalah: %.2f", hasil);
        break;

    case '/':
        hasil = (float)angka1 / angka2;
        printf("Hasil dari pembagian adalah: %.2f", hasil);
        break;

    default:
        printf("Operator tidak valid");
        break;
    }
    return 0;
}