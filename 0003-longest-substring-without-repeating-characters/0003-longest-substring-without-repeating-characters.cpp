class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> counter;
        int left = 0;
        int right = 0;
        int longest = 0;
        for (int right = 0; right < s.size(); ++right) {
            ++counter[s[right]];
            if (counter[s[right]] > 1) {
                while (counter[s[right]] > 1) {
                    --counter[s[left++]];
                }
            }

            longest = std::max(longest, right - left + 1);
        }

        return longest;
    }
};