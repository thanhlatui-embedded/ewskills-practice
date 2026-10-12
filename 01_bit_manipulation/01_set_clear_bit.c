/**
 * @file    01_set_clear_bit.c
 * @brief   Set hoặc clear một bit trong thanh ghi 8-bit.
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 *
 * Đề bài: EWSkills - Bit Manipulation #1
 * Input:  reg, pos, mode
 * Output: Giá trị reg sau khi thao tác
 */

 #include <stdio.h>

unsigned char modifyBit (unsigned char reg,int pos,int mode){
    if(mode){
        reg = reg | (1<<pos); // set bit
    }else{
        reg = reg & ~(1<<pos); //clear bit
    }return reg;
}

int main(){
    unsigned char (reg);
    int pos,mode;
    scanf("%hhu %d %d ", &reg, &pos, &mode);
    printf("%d", modifyBit(reg,pos,mode));
    return 0;
}