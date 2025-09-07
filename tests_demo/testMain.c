#include "demoTests.c"

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

int main()
{

    if(CUE_SUCCESS != CU_initialize_registry()){
        return CU_get_error();
    }

    CU_pSuite demoSuite = CU_add_suite("smallest_missing_suite", init_suite, clean_suite);

    CU_TestInfo tests[] ={
        {"basicTest", basicTest},
        {"negativeNums", negativeNums},
        {"emptyArray", emptyArray}
    };

    size_t nTests = sizeof(tests) / sizeof(tests[0]);

    for(int i =0;i<nTests;i++){
        CU_add_test(demoSuite, tests[i].pName, tests[i].pTestFunc);
    }

    /*
    if(NULL == CU_add_test(demoSuite, "basicTest", basicTest)){
        CU_cleanup_registry();
        return CU_get_error();
    }

    if(NULL == CU_add_test(demoSuite, "negativeNums", negativeNums)){
        CU_cleanup_registry();
        return CU_get_error();
    }

    if(NULL == CU_add_test(demoSuite, "emptyArray", emptyArray)){
        CU_cleanup_registry();
        return CU_get_error();
    }*/

    printf("hello test test");
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return CU_get_error();
}