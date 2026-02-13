class Solution:
    _dp = [None] * 1001
    _dp[1] = False
    _dp[2] = True
    i = 3
    while i <= 1000:
        res = False
        for j in range(1, i):
            if i % j == 0:
                if _dp[i-j] is False:
                    res = True
                    break
        _dp[i] = res
        i += 1

    def divisorGame(self, n: int) -> bool:
        return self._dp[n]
        