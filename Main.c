#include <stdio.h>
#include <math.h>

#include "demo/SmallestMissingInt.h"
#define ARRAY_LENGTH(x) (sizeof(x)/sizeof((x)[0]))


int main()
{
    int nums[] = {-1,-2,4,5,0};
    int l = ARRAY_LENGTH(nums);

    int res = SmallestMissingInt(l, nums);

    printf("Hello World\n");

    printf("smallest positiv int missing is %d\n", res);
    

    

    return 0;
}