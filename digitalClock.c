#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>


int main() {
    time_t raw = 0; // Reference point: Jan 1st, 1970 (Epoch) --> Right now (How many seconds has passed)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning) {
        time(&raw);
        pTime = localtime(&raw);
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        sleep(1);
    }

    return 0;
}