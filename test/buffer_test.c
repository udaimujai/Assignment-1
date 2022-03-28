#include "buffer.h"
#include "unity.h"
#include <stdio.h>
#include <stdlib.h>

void setUp()
{
}

void tearDown()
{
}

void test_write_buffer()
{
    uint8_t *buffer;
    buffer = (uint8_t *)malloc(8 * sizeof(uint8_t));
    buffer_insert(buffer, 12, 6, 24);
    printf("testing...");
    TEST_ASSERT_EQUAL_size_t(24, buffer_extract(buffer, 12, 6));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_write_buffer);
    return UNITY_END();
}