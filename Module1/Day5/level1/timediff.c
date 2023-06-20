//to calculate the difference between two time periods
#include <stdio.h>
// Structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate difference between two time periods
struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;
    // Convert everything to seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    // Calculate the difference in seconds
    int diffSeconds = endSeconds - startSeconds;
    // Convert back to hours, minutes, and seconds
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60; 
    difference.seconds = (diffSeconds % 3600) % 60; //remainder will be zero

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;
    // Read start time
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &(startTime.hours), &(startTime.minutes), &(startTime.seconds));
    // Read end time
    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &(endTime.hours), &(endTime.minutes), &(endTime.seconds));

    // Calculate the difference
    difference = calculateTimeDifference(startTime, endTime);
    //to display the difference
    printf("Time difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);
    return 0;
}
