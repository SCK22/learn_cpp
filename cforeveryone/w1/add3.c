/* Reain in three floats and print sum
sck
21-02-2021
*/
#include <stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("Int three floats:");
    scanf("%f%f%f", &a, &b, &c);
    sum = a + b + c;
    printf("a = %f, b = %f, c =  %f\n",a, b, c);
    printf("sum = %f", sum);
    return 0;
}