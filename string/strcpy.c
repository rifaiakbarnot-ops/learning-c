#include <stdio.h>
#include <string.h>

int main(void)
{
    char nama[100];
    char salinan[100];

    printf("Masukkan nama anda: ");
    fgets(nama, sizeof(nama), stdin);

    nama[strcspn(nama, "\n")] = '\0';
    strcpy(salinan, nama);

    printf("Nama asli anda adalah: %s\n", nama);
    printf("Salinan nama anda adalah: %s\n", salinan);
    printf("Panjang nama asli anda adalah: %zu\n", strlen(nama));
    printf("Panjang nama salinan anda adalah: %zu\n", strlen(salinan));

    return 0;
}