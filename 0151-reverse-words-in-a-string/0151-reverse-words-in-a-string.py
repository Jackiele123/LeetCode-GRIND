class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(' ')
        
        stack = deque()
        for obj in words:
            if obj == '':
                continue
            if len(stack) != 0:
                obj+=' '
            stack.appendleft(obj)
            
        return "".join(stack)
            