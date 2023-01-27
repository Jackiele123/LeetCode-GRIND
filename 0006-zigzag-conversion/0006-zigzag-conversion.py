class Solution:
    def convert(self, s: str, numRows: int) -> str:
        res = ""
        queues = [{int:[]}]*numRows
        
        if(numRows == 1):
            return s
        
        for i in range(numRows):
            queues[i] = {i:[]}
        position = 0
        dequeue = 0
        direction = 1;
        print(queues)
        for i in s:
            if (position + direction > numRows - 1) or (position + direction < 0):
                direction *= -1
            queues[position][position].append(i)
            print(queues[position][position])
            position += direction
            print(position)
        for n in queues:
            print(n)
        for n in range(numRows):
            while(queues[n][n]):
                res+= queues[n][n].pop(0)
            n += 1
        
        return res
        