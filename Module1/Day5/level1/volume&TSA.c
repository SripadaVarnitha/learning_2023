//to calculate volume and total surface area of a box using structures
#include <stdio.h>
// Structure to represent a box
struct Box {
    float length;
    float width;
    float height;
};

// Function to calculate volume using indirection operator (*) and dot operator (.)
float calculateVolume(struct Box* boxPtr) {
    return (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
}
// Function to calculate total surface area using arrow operator (->)
float calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    printf("Enter the length, width, and height of the box: ");
    scanf("%f %f %f", &(myBox.length), &(myBox.width), &(myBox.height));

    // Calculate volume and surface area using pointer and indirection operator (*)
    float volume = calculateVolume(boxPtr);
    // Calculate total surface area using arrow operator (->)
    float surfaceArea = calculateSurfaceArea(boxPtr);

    // Output the results
    printf("Volume of the box : %.2f\n", volume);
    printf("Total Surface Area of the box : %.2f\n", surfaceArea);
    return 0;
}