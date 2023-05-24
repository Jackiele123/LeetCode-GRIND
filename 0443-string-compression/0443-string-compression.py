class Solution:
    def compress(self, chars: List[str]) -> int:
        count = 0
        lastChar = ''
        initialLength = len(chars)
        for i in range(initialLength):
            if chars[0] == lastChar:
                count += 1
                chars.pop(0)
            else:
                if count > 1:
                    for c in str(count):
                        chars.append(c)
                lastChar = chars[0]
                chars.pop(0)
                chars.append(lastChar)    
                count = 1
        if count > 1:
            for c in str(count):
                chars.append(c)   
        return len(chars)
            
        
        