#include <stdio.h>

int main(void)
{

    int celcius;
    float fahrenheit;

    printf("Masukkan suhu dalam celcius: \n");
    scanf("%d", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Suhu dalam fahrenheit: %.2f", fahrenheit);
    return 0;
}