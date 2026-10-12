/**
 * @file    05_clear_bit
 * @brief   You are working with an 8-bit control register. Write a function to clear (set to 0) the bit at a given position without affecting other bits.
            Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #5
 */

#include <stdio.h>
#include <stdint.h>

uint8_t clear_bit(uint8_t reg, uint8_t pos) {
    reg = reg & ~(1<<pos);
    return reg;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = clear_bit(reg, pos);
    printf("%u", result);
    return 0;
}