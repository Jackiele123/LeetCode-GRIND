class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        res = []
        i = 0
        while (i < len(asteroids)):
            if len(res) == 0:
                res.append(asteroids[i])
                i += 1
                continue
            if res[-1] > 0 and asteroids[i] > 0 or res[-1] < 0 and asteroids[i] < 0 or res[-1] < 0:
                res.append(asteroids[i])
                i += 1
            else:
                if abs(res[-1]) > abs(asteroids[i]):
                    i += 1
                    continue
                elif abs(res[-1]) < abs(asteroids[i]):
                    res.pop()
                else:
                    res.pop()
                    i += 1
            
        return res
        