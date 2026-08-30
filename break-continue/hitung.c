#include <stdio.h>

int main(void)
{
    int angka, skip;

    printf("Masukkan jumlah angka yang ingin dihitung: ");
    scanf("%d", &angka);

    printf("Masukkan angka yang ingin diskip: ");
    scanf("%d", &skip);

    if (skip >= 1 && skip <= angka)
    {
        for (int i = 1; i <= angka; i++)
        {
            if (i == skip)
            {
                continue;
            }

            printf("%d ", i);
        }
    }
    else
    {
        printf("Angka skip tidak dalam interval.\n");
    }

    return 0;
}