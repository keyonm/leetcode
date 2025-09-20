class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = (digits[-1] + 1) // 10

        digits[-1] = (digits[-1] + 1) % 10

        i = len(digits) - 2

        while carry and i >= 0:
            carry = (digits[i] + 1) // 10
            digits[i] = (digits[i] + 1) % 10
            i -= 1

        if carry:
            return [1] + digits
        return digits