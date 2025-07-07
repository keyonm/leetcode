class Solution:
    def countSubstrings(self, s: str) -> int:
        def expand(ss: str, low: int, high: int) -> int:
            ans = 0
            while (low >= 0 and high < len(ss)):
                if (ss[low] != ss[high]):
                    break
                low -= 1
                high += 1
                ans += 1

            return ans

        ans = 0
        for i in range(len(s)):
            ans += expand(s, i, i)
            ans += expand(s, i, i + 1)
        
        return ans