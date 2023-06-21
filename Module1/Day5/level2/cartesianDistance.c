//to enter the cartesian points and the find the distance between the points
#include <stdio.h>
#include <math.h>
// Structure to represent a point in Cartesian coordinates
struct Point {
    float x;
    float y;
};
//to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    float distance;
    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    return distance;
}

int main() {
    struct Point point1, point2;
    float distance;
    // Read the coordinates of point 1 and point 2
    printf("Enter the coordinates of Point 1 (x y): ");
    scanf("%f %f", &(point1.x), &(point1.y));
    printf("Enter the coordinates of Point 2 (x y): ");
    scanf("%f %f", &(point2.x), &(point2.y));
    // Calculating the distance
    distance = calculateDistance(point1, point2);
    printf("Distance between the points: %.2f\n", distance);
    return 0;
}
