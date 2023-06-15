//to swap numbers of different datatypes
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size); 
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp); 
}

int main() {
    int a;
    int b;
    printf("Enter values of a and b");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    float x ;
    float y;
    printf("Enter values of x and y");
    scanf("%f %f",&x,&y);
    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);    
    swap(&x, &y, sizeof(float));
    printf("After swapping: x = %.2f, y = %.2f\n", x, y);
    return 0;
}