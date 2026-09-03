#include <stdio.h>

int kuadrat(int angka)
{
    return angka * angka;
}

int main(void)
{
    int hasil = kuadrat(5);
    printf("%d", hasil);
    return 0;
}