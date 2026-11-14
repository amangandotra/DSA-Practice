class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        i = 0
        for j in nums:
            if j<target:
                i+=1
            else:
                break
        return i