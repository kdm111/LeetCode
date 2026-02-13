class Solution:
    def sortSentence(self, s: str) -> str:
        strs = s.split(" ")
        ans = [""] * (len(strs) + 1)
        for s in strs:
            ans[int(s[-1:])] = s[:-1]

        return " ".join(ans)[1:]
