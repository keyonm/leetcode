class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken = set(brokenLetters)
        words = text.split(" ")
        count = 0
        for word in words:
            for c in word:
                if c in broken:
                    count += 1
                    break

        return len(words) - count