#include <stdio.h>
#include <string.h>

int main(void)
{

    char nama[100] = "";

    printf("Masukkan namamu: ");
    fgets(nama, sizeof(nama), stdin);

    printf("Namamu adalah: %s", nama);
    printf("Panjang namamu: %zu\n", strlen(nama));

    return 0;
}