class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        ans = ""
        pivot = min(strs, key=len)
        if pivot == "" or len(strs) == 0:
            return ans
        for i in range(len(pivot)):
            for j in range(len(strs)):
                if pivot[i] != strs[j][i]:
                    return ans
            ans += pivot[i]
        return ans
