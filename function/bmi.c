#include <stdio.h>

float hitungBMI(float berat, float tinggi)
{
    float bmi = berat / (tinggi * tinggi);
    return bmi;
}

int main(void)
{
    float berat, tinggi, hasil;

    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat);

    printf("Masukkan tinggi badan (m): ");
    scanf("%f", &tinggi);

    hasil = hitungBMI(berat, tinggi);
    printf("===Menghitung BMI===\nBerat: %.2fkg\nTinggi: %.2fm\nBMI = %.2f\n", berat, tinggi, hasil);
}