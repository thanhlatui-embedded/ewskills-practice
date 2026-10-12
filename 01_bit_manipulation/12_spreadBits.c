/**
 * @file    12. Bit Spreading Interleave Bits with Zeros
 * @brief   In some protocols or hardware applications (e.g. graphic rendering, signal encoding), bit spreading or interleaving is used to insert 0s between the bits of a value for purposes like data alignment or transmission.
            You are given an 8-bit number, and your task is to:
            Spread the bits such that each bit is followed by a 0
            The result will be a 16-bit number where each original bit occupies even positions (0, 2, 4…)
            All odd positions are 0s
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #12
 */

 #include <stdio.h>
#include <stdint.h>

uint16_t spreadBits (uint8_t val){
    uint16_t result;
    for (int i=0; i<8; i++){
        if(val & (1<<i)){
            result |= (1<<(2*i));
        }
    }
    return result;
}

int main(){
    uint8_t val;
    scanf("%hhu", &val);
    uint16_t result = spreadBits(val);
    printf("%u", result);
    return 0;
}