/**
 * @file   13. Macro-Based Register Config Helper
 * @brief  13. Macro-Based Register Config Helper
In embedded systems, registers are often configured by setting specific bits. To make the code cleaner and reusable, firmware developers use macros to set fields in a register.

You are given a 16-bit control register layout:

Field	Bits	Position (LSB-first)
ENABLE	1	Bit 0
MODE	2	Bits 1–2
SPEED	3	Bits 3–5
RESERVED	2	Bits 6–7 (must be 0)
Your task is to:

Write macros to:
Set the ENABLE bit
Set the MODE field
Set the SPEED field
Read ENABLE, MODE, SPEED from input
Use the macros to pack a final 16-bit register value
RESERVED bits (6–7) must be left 0
 * @date    2026-10-13
 * EWSkills: Bit Manipulation #13
 */

 #include <stdio.h>
#include <stdint.h>

#define enablePos 0
#define enableMask 0x1U

#define modePos 1
#define modeMask 0x3U

#define speedPos 3
#define speedMask 0x7U

// set marco field
#define setEnable(reg, val) ((reg)|=((val)& enableMask)<<enablePos)
#define setMode(reg, val) ((reg)|=((val)&modeMask)<<modePos)
#define setSpeed(reg, val) ((reg)|=((val)&speedMask)<<speedPos)

uint16_t buildReg (uint8_t enable, uint8_t mode, uint8_t speed){
    uint16_t reg =0;
    setEnable(reg, enable); 
    setMode(reg, mode) ;
    setSpeed(reg, speed);
    return reg;
}

int main(){
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);
    printf("%u", buildReg(enable, mode, speed));
    return 0;
}

