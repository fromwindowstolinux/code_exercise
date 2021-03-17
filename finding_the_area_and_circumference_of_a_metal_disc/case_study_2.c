/*
Calculates and displays the area and circumference of a metal disc given in the radius in centimeters
*/

#include <stdio.h>
#define PI 3.14159

int main (void) {

    char part_id1, part_id2, part_id3;
    // input 3 character part id
    double radius;
    // input radius of disc in cm
    double area;
    // output - area of disc in cm^2
    double circumference;
    // output - circumference of disc

    printf("Enter a 3-character part ID: ");
    scanf("%c%c%c", &part_id1, &part_id2, &part_id3);
    // get the part's ID

    printf("Enter radius in centimeter: ");
    scanf("%lf", &radius);
    // get the disc radius 

    area = PI * radius * radius;
    // calculate the area

    circumference = 2 * PI * radius;
    // calculate the circumference

    printf("For part %c%c%c: \n", part_id1, part_id2, part_id3);
    printf("The disc area is %f cm^2.\n", area);
    printf("The circumference is %f cm.\n", circumference);

    return 0;
}
