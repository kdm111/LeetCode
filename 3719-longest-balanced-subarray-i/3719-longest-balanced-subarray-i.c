int longestBalanced(int* nums, int numsSize) {
    int check[100001] = {0, };
    int even_len, odd_len; 
    int ans = 0;
    for (int i = 0; i < numsSize; i++) {
        memset(check, 0, 100001 * sizeof(int));
        even_len = 0;
        odd_len = 0; 
        for (int j = i; j < numsSize; j++) {
            int n = nums[j];
            if (check[n] == 0) {
                check[n] = 1;
                if (n % 2 == 1) {
                    odd_len += 1;
                } else {
                    even_len += 1;
                }
            }
            if (odd_len == even_len) {
                ans = (ans < j - i + 1) ? j - i + 1 : ans;
            }
        }
    }
    return ans;
}