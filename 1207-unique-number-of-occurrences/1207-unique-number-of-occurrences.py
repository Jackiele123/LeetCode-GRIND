class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        nums = {}
        for n in arr:
            if n not in nums:
                nums[n] = 1
            else:
                nums[n] +=1
        
        return len(set(nums.values())) == len(nums)
            
        
        