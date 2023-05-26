class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        
        left = 0
        right = 0
        
        res = 0
        
        for n in nums:
            right += n
        
        
        for i, n in enumerate(nums):
            right -= n
            if left == right:
                return i
            left += n
            
        return -1
