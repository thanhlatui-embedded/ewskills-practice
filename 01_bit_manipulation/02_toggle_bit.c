/**
 * @file    02_toggle_bit.c
 * @brief   Đảo bit thứ N của số nguyên
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #2
 */

 #include <stdio.h>

int toggleBit(int reg){
    return reg ^ (1<<5);
}

int main(){
    int reg;
    scanf("%d", &reg);
    printf("%d", toggleBit(reg));
    return 0;
}