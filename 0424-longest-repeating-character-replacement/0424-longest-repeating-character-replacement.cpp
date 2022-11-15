class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26);
        
        int longest = 0;
        int left = 0;
        int right = 0;
        int result = 0;
        if (s.size() == 1)
            return 1;
       
        while (right < s.size()){
            count[s[right] - 'A']++;
            if (count [s[right] - 'A'] > longest)
                longest = count[s[right] - 'A'];
            if(right - left + 1 - longest > k){
                count[s[left] - 'A']--;
                left++;
            }
            if (right - left + 1 > result)
                result = right - left + 1;
            right++;
        }
        return result;
    }
};