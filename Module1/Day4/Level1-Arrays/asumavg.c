//to calculate the sum and average of a one-dimensional array
#include <stdio.h>

int main() {
    int array[100];
    int length, sum = 0;
    float average;

    printf("Enter the length of the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = (float)sum / length;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
