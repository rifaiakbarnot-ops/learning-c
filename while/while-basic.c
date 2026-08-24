#include <stdio.h>

int main(void)
{
    int n;
    int i = 0;

    printf("Masukkan nilai awal; \n");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }

    return 0;
}