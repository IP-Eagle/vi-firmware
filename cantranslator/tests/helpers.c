#include <check.h>
#include <stdint.h>

void check_equal_unit64(uint64_t value, uint64_t expected) {
    fail_unless(value == expected, "Expected 0x%X%X but got 0x%X%X",
            expected, expected >> 32, value, value >> 32);
}