class Solution:
    def decodeString(self, s: str) -> str:
        counts = []
        strings = []
        curr = ""
        k = 0
        for c in s:
            if c.isdigit():
                k = k * 10 + ord(c) - ord('0')
            elif c == '[':
                counts.append(k)
                strings.append(curr)
                curr = ""
                k = 0
            elif c == ']':
                decoded = strings[-1]
                strings.pop()
                for i in range(counts[-1], 0, -1):
                    decoded = decoded + curr
                counts.pop()
                curr = decoded
            else:
                curr = curr + c

        return curr