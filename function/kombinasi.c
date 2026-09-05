#include <stdio.h>

int faktorial(int angka)
{
    int total = 1;
    for (int i = 1; i <= angka; i++)
    {
        total *= i;
    }
    return total;
}

int kombinasi(int n, int r)
{
    int hasil = faktorial(n) / (faktorial(r) * faktorial(n - r));
    return hasil;
}

int main(void)
{

    int total = faktorial(5);
    printf("%d\n", total);

    int c = kombinasi(5, 3);
    printf("%d\n", c);
    return 0;
}