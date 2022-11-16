class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> count;
        
        int left  = 0;
        int right = 0;
        
        int result = 0;
        int length = 0;
        
        while (right < s.size()){
            count[s[right]]++;
            while(count[s[right]] > 1){
                count[s[left]]--;
                left++;
                length--;
            }
            right++;
            length++;
            result = max(length, result);
        }
        return result;
        
    }
};