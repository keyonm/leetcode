class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> last = { 1 };
        vector<int> next = {1, 1};
        if (rowIndex == 0) { 
            return last;
        }

        if (rowIndex == 1) {
            return next;
        }

        for (int i = 2; i <= rowIndex; ++i) {
            last = next;
            for (int i = 1; i < next.size(); ++i) {
                next[i] = last[i] + last[i-1];
            }
            next.push_back(1);
        }
        return next;
    }
};