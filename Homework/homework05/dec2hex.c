#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    unsigned long num;
    int digits;

    if (argc >= 2) {
        num = strtoul(argv[1], NULL, 10);
        if (argc == 3)
            digits = atoi(argv[2]);
        else
            digits = 8; 
    } else {
        printf("Enter a base-10 number: ");
        scanf("%lu", &num);
        printf("Enter number of digits (8 or 16): ");
        scanf("%d", &digits);
    }

    if (digits != 8 && digits != 16)
        digits = 8;

    printf("Hexadecimal (%d-digit): ", digits);

    if (digits == 8)
        printf("0x%08lX\n", num);
    else
        printf("0x%016lX\n", num);

    return 0;
}