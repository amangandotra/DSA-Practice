class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in range(len(nums)-1):
            complement = target - nums[i] 
            if complement in nums[i+1:]:
                return [i, nums[i+1:].index(complement)+i+1]