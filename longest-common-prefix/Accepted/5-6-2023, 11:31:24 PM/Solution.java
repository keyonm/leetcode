// https://leetcode.com/problems/longest-common-prefix

class Solution {
    public String longestCommonPrefix(String[] strs) {
        int shortest = 200;
        for (int i = 0; i < strs.length; i++){
            if (strs[i].length() < shortest){
                shortest = strs[i].length();
            }
        }

        char charat = 'a';
        int len = 0;
        for (int j = 0; j < shortest; j++){
            for (int k = 0; k < strs.length; k++){
                if (k == 0){
                    charat = strs[k].charAt(j);
                }

                if (strs[k].charAt(j) != charat) {
                    return strs[0].substring(0, len);
                }
            }
            len++;
        } return strs[0].substring(0, len);
    }
}