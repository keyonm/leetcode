class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda item: item[1])
        end = intervals[0][1]
        rem = 0
        for i in range(1, len(intervals)):
            if intervals[i][0] < end:
                rem += 1
            else:
                end = intervals[i][1]
        
        return rem