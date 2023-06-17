//to compute the given time in total seconds
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeStr[10]; 
    unsigned long hours, minutes, seconds;
    printf("Enter the time in HH:MM:SS format: ");
    scanf("%8s", timeStr);
    hours = strtoul(strtok(timeStr, ":"), NULL, 10);
    minutes = strtoul(strtok(NULL, ":"), NULL, 10);
    seconds = strtoul(strtok(NULL, ":"), NULL, 10);
    unsigned long totalSeconds = hours * 3600 + minutes * 60 + seconds;
    printf("Total seconds: %lu\n", totalSeconds);
    return 0;
}
