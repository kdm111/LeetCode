class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        nums.sort()
        ans = nums[k-1] - nums[0]
        i = 0
        for j in range(k-1, len(nums)):
            ans = min(ans, nums[j] - nums[i])
            i += 1
        return ans
