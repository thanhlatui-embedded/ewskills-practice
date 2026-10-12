/**
 * @file    06_Set the Bit in an 8-bit Register
 * @brief   In your firmware, you want to toggle a specific bit in an 8-bit register. Toggle means to invert the bit: if 1 → 0, and if 0 → 1.
            Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #6
 */
#include <stdio.h>
#include <stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t pos) {
    reg = reg ^ (1<<pos);
    return reg;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = toggle_bit(reg, pos);
    printf("%u", result);
    return 0;
}