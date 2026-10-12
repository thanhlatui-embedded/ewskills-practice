/**
 * @file    04_Set the Bit in an 8-bit Register
 * @brief   You are working with an 8-bit control register. Write a function to set the bit at a given position without affecting other bits.
            Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #4
 */
#include <stdio.h>
#include <stdint.h>

uint8_t set_bit(uint8_t reg, uint8_t pos) {
    return reg = reg | (1<<pos);
    
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);  // Accept register value and position
    uint8_t result = set_bit(reg, pos);
    printf("%u", result);         // Output the result as an integer
    return 0;
}
