#include <stdint.h>
#include <stdio.h>

uint8_t hexchar2val(uint8_t in)
{
    const uint8_t letter = in & 0x40;
    const uint8_t shift = (letter >> 3) | (letter >> 6);
    return (in + shift) & 0xf;
}

int main()
{
    printf("%d\n", hexchar2val('e'));
    printf("%d\n", hexchar2val('E'));
    return 0;
}