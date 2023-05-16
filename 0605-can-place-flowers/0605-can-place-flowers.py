class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 1
        beds = 0
        for bed in flowerbed:
            if bed:
                beds += (count - 1) // 2
                count = 0
            else:
                count += 1
        
        beds += count // 2

        return beds >= n
                