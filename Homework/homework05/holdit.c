#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    double seconds;
    int minutes;

    printf("This program will time how long you can hold your breath.\n");
    printf("Take a deep breath, then press ENTER to start.\n");
    getchar();

    time(&start);  

    printf("Now hold your breath... press ENTER again when you must exhale.\n");
    getchar();

    time(&end);  

    seconds = difftime(end, start);
    minutes = (int)(seconds / 60);
    seconds = (int)seconds % 60;

    printf("You held your breath for %d minute(s) and %.0f second(s)!\n", minutes, seconds);

    return 0;
}