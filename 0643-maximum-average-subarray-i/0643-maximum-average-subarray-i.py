class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        left = 0
        right = k-1
        
        largest = 0
        
        for i in range(k):
            print (nums[i])
            largest += nums[i]
        total = largest
        while right < len(nums)-1:   
            right += 1
            total += nums[right]
            
            total -= nums[left]
            left += 1
            if total > largest:
                largest = total
                
        return largest/k
            
            
        