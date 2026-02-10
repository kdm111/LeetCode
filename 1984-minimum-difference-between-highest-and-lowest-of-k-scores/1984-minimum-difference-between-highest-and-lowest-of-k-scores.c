

int minimumDifference(int* nums, int numsSize, int k) {
    int temp;
    for (int i = 0 ; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;     
            }
        }
    }
    int ans = nums[k-1] - nums[0];
    int i = 0;
    for (int j = k -1; j < numsSize; j++) {
        ans = ans > nums[j] - nums[i] ? nums[j] - nums[i] : ans;
        i++;
        //printf("%d %d\n", i, j);
    }
    return ans;
}