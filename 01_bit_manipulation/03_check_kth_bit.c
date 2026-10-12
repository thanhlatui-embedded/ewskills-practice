/**
 * @file    03_check_kth_bit.c
 * @brief   Write a C program to check if the K-th bit (0-based index) of an integer N is set (1) or not (0).
 * @author  thanhlatui-embedded
 * @date    2026-10-12
 * EWSkills: Bit Manipulation #3
 */

#include <stdio.h>

int isKthBitSet(int n, int k) {
    return (n &(1<<k)) ? 1 : 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", isKthBitSet(n, k));
    return 0;
}
