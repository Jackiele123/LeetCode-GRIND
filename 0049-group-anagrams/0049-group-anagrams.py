class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        
        for word in strs:
            word_list = list(word)
            word_list.sort()
            
            curr_word = "".join(word_list)
            
            if curr_word in groups:
                groups[curr_word].append(word)
            else:
                groups[curr_word] = [word]
                
        output = []
        for word_list in groups:
            output.append(groups[word_list])
            
        return output