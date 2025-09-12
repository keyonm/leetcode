class Solution(object):
    def fullJustify(self, words, maxWidth):
        """
        :type words: List[str]
        :type maxWidth: int
        :rtype: List[str]
        """
        
        """
        get words, format, add to ans
        """
        def get_line(i):
            line = []
            length = 0
            while i < len(words) and length + len(words[i]) <= maxWidth:
                line.append(words[i])
                length += len(words[i]) + 1
                i += 1
        
            return line

        def create_line(line, i):
            length = -1
            for word in line:
                length += len(word) + 1

            spaces = maxWidth - length

            if len(line) == 1 or i == len(words):
                return " ".join(line) + " " * spaces
            
            word_count = len(line) - 1
            spaces_per_word = spaces // word_count

            for j in range(word_count):
                line[j] += " " * spaces_per_word

            needs_additional = spaces % word_count

            for j in range(needs_additional):
                line[j] += " "

            return " ".join(line)

        ans = []
        i = 0
        while i < len(words):
            curr_words = get_line(i)
            i += len(curr_words)
            ans.append(create_line(curr_words, i))

        return ans