class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        phone = {"2":"abc", "3":"def", "4":"ghi", "5":"jkl", "6":"mno", "7":"pqrs", "8":"tuv", "9":"wxyz"}
        
        res = []
        
        if (len(digits) == 0):
            return res
        
        self.dfs(digits,0,'',phone,res)
        
        return res
        
    def dfs(self, nums, index, combination, phone, res):
        
        if(index >= len(nums)):
            res.append(combination)
            return
        
        tempString = phone[nums[index]]
        
        for i in tempString:
            self.dfs(nums,index+1,combination+i,phone,res)
            