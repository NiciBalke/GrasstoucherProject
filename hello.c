#include <stdio.h>
#include <math.h>

int main()
{
    double angle =15.0;
    double radians = angle * M_PI / 180;
    double out = sin(radians);

    printf("Hello World\n");
    printf("sin of 15 = %f \n", out);
    

    return 0;
}