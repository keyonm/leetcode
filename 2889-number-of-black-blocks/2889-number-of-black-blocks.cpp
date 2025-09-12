class Solution {
public:
    vector<long long> countBlackBlocks(int m, int n, vector<vector<int>>& coordinates) {
        map<pair<int, int>, int> map;
        for (auto a : coordinates) {
            int x = a[0];
            int y = a[1];
            if (x == m - 1 && y == n - 1) {
                map[{x - 1, y - 1}]++;
            } else if (y == n - 1) {
                map[{x,y-1}]++;
                map[{x-1,y-1}]++;
            } else if(x == m-1){
                map[{x-1,y}]++;
                map[{x-1,y-1}]++;
            } else {
                map[{x-1,y}]++;
                map[{x,y-1}]++;
                map[{x-1,y-1}]++;
                map[{x,y}]++;
            }
        }

        vector<long long> ans(5, 0);
        for (auto[a, b] : map) {
            if (a.first >= 0 && a.second >= 0) {
                ++ans[b];
            }
        }

        int sum = accumulate(ans.begin(), ans.end(), 0);

        ans[0] = (long long)(m - 1) * (long long)(n - 1) - sum;

        return ans;
    }
};