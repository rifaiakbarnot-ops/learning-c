#include <stdio.h>

int main(void)
{
    int integer1, integer2, sum;
    // Deklarasi int supaya varabel integer1, integer2, sum bisa diisi angka

    printf("Enter your first number: \n");
    scanf("%d", &integer1);
    // %d Untuk mencari angka yang user ketik, dan & untuk assign ke variabel integer1

    printf("Enter your second number: \n");
    scanf("%d", &integer2);
    // %d Untuk mencari angka yang user ketik, dan & untuk assign ke variabel integer2

    sum = integer1 + integer2;

    printf("The two number sums are: %d", sum);

    return 0;
}
