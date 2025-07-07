class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        start = 0
        frequency_map = {}
        max_freq = 0
        longest = 0
        for end in range(len(s)):
            frequency_map[s[end]] = frequency_map.get(s[end], 0) + 1
            max_freq = max(max_freq, frequency_map[s[end]])
            is_valid = (end + 1 - start - max_freq <= k)

            if not is_valid:
                frequency_map[s[start]] -= 1
                start += 1
            
            longest = end + 1 - start

        return longest