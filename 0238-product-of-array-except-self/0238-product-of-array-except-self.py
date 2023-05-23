class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = len(nums)*[1]
        
        pref = len(nums)*[1]
        suff = len(nums)*[1]
        
        prefVal = 1
        suffVal = 1
        for i in range(len(nums)):
                pref[i] = prefVal
                prefVal *= nums[i]
        for i in range(len(nums)-1,-1,-1):
                suff[i] = suffVal
                suffVal *= nums[i]
        for i in range(len(nums)):
            res[i] *= pref[i] * suff[i]
            
        return res