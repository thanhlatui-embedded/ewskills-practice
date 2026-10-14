/**
 * @file    07_Is the Bit Set
 * @brief   Given an 8-bit register, check whether the bit at a specific position is set (i.e., equals 1).
            Return 1 if the bit is set, otherwise return 0.
 * @author  thanhlatui-embedded
 * @date    2026-10-14
 * EWSkills: Bit Manipulation #7
 */

 #include <stdio.h>
#include <stdint.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos) {
    return (reg&(1<<pos))?1:0;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    printf("%u", is_bit_set(reg, pos));
    return 0;
}