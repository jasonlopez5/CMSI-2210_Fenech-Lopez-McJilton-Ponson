#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int N;

    if (argc >= 2)
        N = atoi(argv[1]);
    else {
        printf("Enter a number N: ");
        scanf("%d", &N);
    }

    printf("     "); 
    for (int j = 1; j <= N; j++)
        printf("%4d", j);
    printf("\n");

    printf("    +");
    for (int j = 1; j <= N; j++)
        printf("----");
    printf("\n");

    for (int i = 1; i <= N; i++) {
        printf("%3d |", i); 
        for (int j = 1; j <= N; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}