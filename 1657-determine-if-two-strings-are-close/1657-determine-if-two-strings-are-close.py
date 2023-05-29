class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        if len(word1) != len(word2):
            return False
        
        map1 = {}
        map2 = {}
        
        for i, c in enumerate(word1):
            if c not in map1:
                map1[c] = 1
            else:
                map1[c] += 1
        
        for i, c in enumerate(word2):
            if c not in map2:
                map2[c] = 1
            else:
                map2[c] += 1
            
        for i in map1:
            if i not in map2:
                return False
        
        val1 = list(map1.values())
        val2 = list(map2.values())
        val1.sort()
        val2.sort()
        
        return val1 == val2
            
            
        
        
        