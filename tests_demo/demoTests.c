#include <stdio.h>
#include <assert.h>
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

#include "../demo/SmallestMissingInt.h"

void basicTest()
{
    int arr1[] = {0, 1, 2};
    CU_ASSERT(SmallestMissingInt(3, arr1) == 3);
}

void negativeNums()
{
    int arr2[] = {-1, -2, -3};
    CU_ASSERT(SmallestMissingInt(3, arr2) == -1);
}

void emptyArray()
{
    int arr3[1];
    CU_ASSERT(SmallestMissingInt(0, arr3) == 0);
}