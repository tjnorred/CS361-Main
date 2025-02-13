#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void test_add(void) {
    CU_ASSERT(add(2, 3) == 5);
    CU_ASSERT(add(-1, 1) == 0);
    CU_ASSERT(add(-4, -3) == -7);
    CU_ASSERT(add(0, 0) == 0);
}

void test_subtract(void) {
    CU_ASSERT(subtract(5, 3) == 2);
    CU_ASSERT(subtract(-1, -1) == 0);
    CU_ASSERT(subtract(-1, -5) == 4);
    CU_ASSERT(subtract(0, 0) == 0);
}

int main(void) {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("MathTestSuite", 0, 0);
    CU_add_test(suite, "test of add()", test_add);
    CU_add_test(suite, "test of subtract()", test_subtract);

    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}