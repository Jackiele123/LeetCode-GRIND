class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        left = 0
        right = 0
        flip = 0
        res = 0
        
        while (right < len(nums)):
            if nums[right] == 0:
                while(flip >= k):
                    if nums[left] == 0:
                        flip -= 1
                    left += 1
                flip += 1
            right += 1
            if right - left > res:
                res = right - left
        return res
            
            