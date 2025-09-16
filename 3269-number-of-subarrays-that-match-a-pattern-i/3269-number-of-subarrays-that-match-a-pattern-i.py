class Solution:
    def countMatchingSubarrays(self, nums: List[int], pattern: List[int]) -> int:
        n, m = len(nums), len(pattern)
        i = 0
        counter = 0
        while (i + m) < n:
            broken = False
            for k in range(m):
                if pattern[k] == 1:
                    if not (nums[i + k + 1] > nums[i + k]):
                        broken = True
                        break
                        
                elif pattern[k] == 0:
                    if not (nums[i + k + 1] == nums[i + k]):
                        broken = True
                        break

                elif pattern[k] == -1:
                    if not (nums[i + k + 1] < nums[i + k]):
                        broken = True
                        break

            if not broken:
                counter += 1
            i += 1 


        return counter