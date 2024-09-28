// https://leetcode.com/problems/valid-parentheses

class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        List<Character> open = List.of('(', '{', '[');
        List<Character> close = List.of(')', '}', ']');
        for (int i = 0; i < s.length(); i++){
            if (open.contains(s.charAt(i))) {
                stack.push(s.charAt(i));
            }
            else if (close.contains(s.charAt(i))){
                if (stack.empty()) {
                    return false;
                }
                if (open.indexOf(stack.pop()) != close.indexOf(s.charAt(i))){
                    return false;
                }
            }
        }

        return stack.empty();
    }
}