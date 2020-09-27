#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int lower = 0, higher = 0;
    for (int i = 0; i < numsSize; i++) {
        lower ^= nums[i];
        lower &= ~higher;
        higher ^= nums[i];
        higher &= ~lower;
    }
    return lower;
} 

int main()
{
    int arr1[] = {2, 3, 2, 2};
    int arr2[] = {0, 1, 0, 1, 0, 1, 99};
    printf("%d\n", singleNumber(arr1, 4));
    printf("%d\n", singleNumber(arr2, 7));
    return 0;
}