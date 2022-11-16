class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> map;
        
        int left = 0;
        int right = 0;
        
        string window = "";
        int validation = t.size();
        int start = 0;
        int minLength = INT_MAX;
        
        
        for (int i = 0; i < t.size(); i++)
            map[t[i]]++;
        
        validation = t.size();
        
        while(right < s.size()){
            
            if (map[s[right]] > 0)
                validation--;
            
            map[s[right]]--;
            right++;
            while(validation == 0){
                if(right - left  < minLength){
                    start = left;
                    minLength = right -left;
                }
                
                map[s[left]]++;
                if (map[s[left]] > 0)
                    validation++;
                left++; 
            }
        }
        
        if (minLength != INT_MAX) 
            return s.substr(start, minLength);
        return "";
    }
};