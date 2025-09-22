class Solution:
    def alternateDigitSum(self, n: int) -> int:
        sign = 0
        ans = 0
        digits = 0
        while n:
            digit = n % 10
            n //= 10
            digits += 1
            if sign:
                ans -= digit
            else:
                ans += digit
            
            sign = 1 - sign

        if digits % 2 == 0:
            return -ans
        return ans