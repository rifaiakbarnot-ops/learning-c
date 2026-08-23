#include <stdio.h>

int main(void)
{
    int hari;

    printf("Pilih Hari: \n");
    printf("1. Senin\n");
    printf("2. Selasa\n");
    printf("3. Rabu\n");
    printf("4. Kamis\n");
    printf("5. Jumat\n");
    scanf("%d", &hari);

    switch (hari)
    {
    case 1:
        printf("Kamu memilih hari senin. \n");
        break;

    case 2:
        printf("Kamu memilih hari selasa. \n");
        break;

    case 3:
        printf("Kamu memilih hari rabu. \n");
        break;

    case 4:
        printf("Kamu memilih hari kamis. \n");
        break;

    case 5:
        printf("Kamu memilih hari jumat. \n");
        break;

    default:
        printf("Pilihan tidak tersedia. \n");
    }

    return 0;
}