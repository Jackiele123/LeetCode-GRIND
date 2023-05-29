class Solution:
    def removeStars(self, s: str) -> str:
        res = []
        for i in range(len(s)):
            res.append(s[i])
            if s[i] == '*':
                res.pop()
                if len(res) != 0:
                    res.pop()
            
        
            
        return ''.join(res)
        
            