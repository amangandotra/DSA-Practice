class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        output = []
        prev = -101
        for i in range(len(nums)):
            if nums[i] != prev:
                prev = nums[i]
                output.append(nums[i])
        nums[:] = output 
        return len(output)