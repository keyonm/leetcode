class Solution(object):
    def brightestPosition(self, lights):
        d = collections.defaultdict(int)
        for i, dis in lights:
            d[i - dis] += 1
            d[i + dis + 1] -= 1
        
        curr = 0
        max_idx = -1
        max_val = -sys.maxsize

        for idx, val in sorted(d.items()):
            curr += val
            if curr > max_val:
                max_val, max_idx = curr, idx

        return max_idx