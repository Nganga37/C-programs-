
#include <stdio.h>

// Function declaration to calculate the area of a circle
float calculateArea(float radius) {
    const float PI = 3.14159f;
    return PI * radius * radius;
}

int main() {
    float radius, area;
    
    // Input the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Call the function to calculate the area
    area = calculateArea(radius);
    
    // Output the result
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);
    
    return 0;
}
