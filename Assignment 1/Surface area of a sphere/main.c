#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, surfaceArea;
    const float PI = 3.14159;

    // Take radius as input
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate surface area (Formula: 4 * π * r²)
    surfaceArea = 4 * PI * radius * radius;

    // Display result
    printf("Surface area of the sphere = %.2f\n", surfaceArea);
    return 0;
}
