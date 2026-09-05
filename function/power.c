#include <stdio.h>

int power(int angka, int pangkat)
{
    int total = 1;
    for (int i = 1; i <= pangkat; i++)
        total *= angka;
    return total;
}

int main(void)
{
    int hasil = power(2, 3);
    printf("%d\n", hasil);
    return 0;
}