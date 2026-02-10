/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ret;
    *returnSize = 2;
    for (int i = 0 ; i < numsSize; i++) {
        target -= nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (target == nums[j]) {
                ret = (int *)malloc(2 * sizeof(int));
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
        target += nums[i];
    }
    return ret;
}