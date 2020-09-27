#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

const uint32_t D = 3;
#define M ((uint64_t)(UINT64_C(0xFFFFFFFFFFFFFFFF) / (D) + 1))

/* compute (n mod d) given precomputed M */
uint32_t quickmod(uint32_t n)
{   uint64_t quotient = ((__uint128_t) M * n) >> 64;
    return n - quotient * D;
}

bool divisible(uint32_t n)
{
    return n * M <= M-1;
}

int main()
{
    printf("%d\n", quickmod(5));
    printf("%d\n", quickmod(55));
    printf("%d\n", quickmod(555));
    printf("%d\n", divisible(7));
    printf("%d\n", divisible(87));
    return 0;
}