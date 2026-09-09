#include <stdio.h>
#include <string.h>

int main(void)
{
    char nama[100];

    printf("Masukkan nama: ");
    fgets(nama, sizeof(nama), stdin);

    nama[strcspn(nama, "\n")] = '\0';

    if (strcmp(nama, "Akbar") == 0)
    {
        printf("Nama kamu Akbar!");
    }
    else
    {
        printf("Nama kamu bukan Akbar.");
    }

    return 0;
}