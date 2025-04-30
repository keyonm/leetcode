class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqs;

        for (auto num : arr) {
            ++freqs[num];
        }

        unordered_set<int> set;
        for (auto [key, value] : freqs) {
            set.insert(value);
        }

        return freqs.size() == set.size();
    }
};