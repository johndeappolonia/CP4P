#include "fundamentals.h"

// Unit test for the indexString function for V1
void test_indexString() {
    // Test case 1
    char buffer1[] = "Hello";
    size_t position1 = 3;
    printf("Testing indexString('%s', %zu): Result = '%c'\n", buffer1, position1, indexString(buffer1, position1));

    // Test case 2
    char buffer2[] = "World123";
    size_t position2 = 0;
    printf("Testing indexString('%s', %zu): Result = '%c'\n", buffer2, position2, indexString(buffer2, position2));

    // Test case 3
    char buffer3[] = "12345";
    size_t position3 = 1;
    printf("Testing indexString('%s', %zu): Result = '%c'\n", buffer3, position3, indexString(buffer3, position3));

    // Test case 4
    char buffer4[] = "Test";
    size_t position4 = 8;
    // intentionally overloaded for testing
    printf("Testing indexString('%s', %zu): Result = Invalid Position\n", buffer4, position4, indexString(buffer4, position4));

    // Test case 5
    char buffer5[] = "";
    size_t position5 = 3;
    printf("Testing indexString('%s', %zu): Result = '%c', Invalid Position\n", buffer5, position5, indexString(buffer5, position5));

    // Test case 6
    char buffer6[] = "*%@";
    size_t position6 = 0;
    printf("Testing indexString('%s', %zu): Result = '%c'\n", buffer6, position6, indexString(buffer6, position6));

    // Test case 7
    char buffer7[] = "-12";
    size_t position7 = 2;
    printf("Testing indexString('%s', %zu): Result = '%c'\n", buffer7, position7, indexString(buffer7, position7));

    // Test case 8
    char buffer8[] = "a";
    size_t position8 = -1;
    printf("Testing indexString('%s', %zu): Result = '%c', Invalid Position\n", buffer8, position8, indexString(buffer8, position8));

}

