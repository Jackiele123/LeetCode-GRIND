class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        right = k-1
        left = 0
        vowels = 'aeiou'
        
        largest = 0
        
        for i in range(k):
            if s[i] in vowels:
                largest += 1
        
        total = largest
        
        while(right < len(s)-1):
            right += 1
            if s[right] in vowels:
                total += 1
            
            if s[left] in vowels:
                total -= 1
            left += 1

            if total > largest:
                largest = total
        
        return largest