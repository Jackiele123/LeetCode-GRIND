class Solution:
    def decodeString(self, s: str) -> str:       
        def dfs(s,p):
            res = ""
            i,num = p,0
            while i<len(s):
                asc = (ord(s[i])-48)
                if 0<=asc<=9:           # can also be written as if s[i].isdigit()
                    num=num*10+asc
                elif s[i]=="[":
                    local,pos = dfs(s,i+1)
                    res+=local*num
                    i=pos
                    num=0
                elif s[i]=="]":
                    return res,i
                else:
                    res+=s[i]
                i+=1
            return res,i

        return dfs(s,0)[0]
            
            
                