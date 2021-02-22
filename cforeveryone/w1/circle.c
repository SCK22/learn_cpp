/*
Circle and Area
sck
22-02-2021
*/

#include <stdio.h>
#define PI 3.14159
/* define does an interesting thing, a pre-processor token is PI 
*/
int main()
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: "); // prompt user for input
    scanf("%lf", &radius); //save the input into radius
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
    return 0;
}
