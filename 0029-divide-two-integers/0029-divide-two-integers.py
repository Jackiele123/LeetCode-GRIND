class Solution:
    def recursiveDivide(self, currT: int, b: int) -> int:
        
        dF = b #dF = Division Factor 
        res = 1
        #Base Case
        if currT < b:
            return 0
        if currT == b:
            return 1
        
        while((dF << 1) < currT):
            dF = dF << 1
            res = res << 1
        
        return res + self.recursiveDivide(currT - dF, b)
    
    def divide(self, dividend: int, divisor: int) -> int:
        
        MIN_INT = pow(-2,31)
        MAX_INT = pow(2,31) - 1
        
        positive = False
        if (divisor == 1):
            return dividend
        if((dividend > 0 and divisor > 0) or (dividend < 0 and divisor < 0)):
            positive = True
        
        dividend = abs(dividend)
        divisor = abs(divisor)
        
        
        
        result = self.recursiveDivide(dividend,divisor)

        result = min(max(result, MIN_INT), MAX_INT)
        
        return result if positive else -result
            
            