#include <stdio.h>

int main() {
    float radius;
    float height;
    float surface_area;
   const float PI=3.14159;
    
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    
    surface_area = 2 * PI * radius * (height + radius);

    
    printf("The surface area of the cylinder is: %.2f\n", surface_area);

    return 0;
}