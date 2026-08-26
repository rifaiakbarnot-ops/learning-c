#include <stdio.h>

/*
Buat program yang mencetak angka 1 sampai n
Jika angka habis dibagi 3 -> Cetak Fizz
Jika habis dibagi 5 -> Cetak Buzz
Jika habis dibagi 3 dan 5 -> cetak FizzBuzz
Selain itu -> Cetak angkanya
*/
int main(void)
{

    int angka;

    printf("Masukkan angka anda: \n");
    scanf("%d", &angka);

    for (int i = 1; i <= angka; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");

        else if (i % 5 == 0)
            printf("Buzz\n");

        else if (i % 3 == 0)
            printf("Fizz\n");

        else
            printf("%d\n", i);
    }
    return 0;
}