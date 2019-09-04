// Converts distance in miles to kilometers

#include <stdio.h>
#define KILOMETER_PER_MILE 1.609

int main(void)
{
    double miles = 0;
    double kilometers = 0;

    printf("Enter the distance in miles : ");
    scanf("%lf", &miles);

    kilometers = KILOMETER_PER_MILE * miles;

    printf("%.3lf miles equals to %.3lf kilometers.\n", miles, kilometers);

    return(0);
}
