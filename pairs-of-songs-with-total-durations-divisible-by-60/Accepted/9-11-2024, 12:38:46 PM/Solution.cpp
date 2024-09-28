// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int, int> map;
        int count = 0;
        for (int i = 0; i < time.size(); ++i) {
           if (time[i] % 60 == 0) {
            count += map[0];
           }
            ++map[time[i] % 60];
        } 

        for (int i = 1; i < 30; ++i) {
            count += (map[i] * map[60-i]);
        }

        count += (map[30] * (map[30] - 1))/2;

        return count;
    }
};