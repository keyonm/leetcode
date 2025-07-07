class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if i == '(' or i == '[' or i == '{':
                stack.append(i)
            elif i == ')':
                if len(stack) == 0:
                    return False
                if stack.pop() != '(':
                    return False
            elif i == ']':
                if len(stack) == 0:
                    return False
                if stack.pop() != '[':
                    return False
            elif i == '}':
                if len(stack) == 0:
                    return False
                if stack.pop() != '{':
                    return False

        return len(stack) == 0