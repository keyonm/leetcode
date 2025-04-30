class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }


    int maxVowels(string s, int k) {
       int curr = 0;
       for (int i = 0; i < k; ++i) {
            if (isVowel(s.at(i))) {
                ++curr;
            }
       } 

       int max = curr;
        for (int i = k; i < s.size(); ++i) {
            if (isVowel(s.at(i))) {
                ++curr;
            }

            if (isVowel(s.at(i-k))) {
                --curr;
            }

            max = std::max(curr, max);
        }

       return max;
    }  
};