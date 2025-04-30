class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int most = 0;
        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] > most) {
                most = candies[i];
            }
        }

        vector<bool> ret;

        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= most) {
                ret.push_back(true);
            } else {
                ret.push_back(false);
            }
        }

        return ret;
    }
};