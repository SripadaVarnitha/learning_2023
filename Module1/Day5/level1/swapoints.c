//swap the fields of two structures using pointers
#include <stdio.h>
struct Point {
    int x;
    int y;
};
// Function to swap the fields of two Point structures using pointers
void swapFields(struct Point* point1, struct Point* point2) {
    int tempX = point1->x;
    int tempY = point1->y;
    point1->x = point2->x;
    point1->y = point2->y;
    point2->x = tempX;
    point2->y = tempY;
}

int main() {
    struct Point point1, point2;
    printf("Enter the coordinates of Point 1 (x y): ");
    scanf("%d %d", &(point1.x), &(point1.y));
    printf("Enter the coordinates of Point 2 (x y): ");
    scanf("%d %d", &(point2.x), &(point2.y));

    // Print the original points
    printf("\nOriginal Coordinates:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);
    // Swapping operation
    swapFields(&point1, &point2);
    // Print the swapped points
    printf("\nSwapped Coordinates:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);
    return 0;
}
