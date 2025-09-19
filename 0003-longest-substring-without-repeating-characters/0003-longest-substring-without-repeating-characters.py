class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        most = 0
        chars = Counter()

        left = right = 0

        while right < len(s):
            r = s[right]
            chars[r] += 1
            while chars[r] > 1:
                chars[s[left]] -= 1
                left += 1
            most = max(most, right - left + 1)
            right += 1
        return most