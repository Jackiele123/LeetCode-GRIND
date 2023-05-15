class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        count = 0
        res = ""
        for i in range(min(len(str1),len(str2))):
            if str1[i]!= str2[i]:
                break
            count += 1    
            if len(str1)%count == 0 and len(str2)%count == 0:
                print(str1[:count])
                print(count)
                if str1[:count]*(len(str1)//count) == str1 and str1[:count]*(len(str2)//count) == str2:
                    res = str1[:count]
        return res
            
        
            
        