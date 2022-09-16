class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        int forward[n];
        int backward[n];
        vector<int> answer;
        
        forward[0] = 1;
        backward[n - 1] = 1;
        
        for(int i = 1; i < nums.size(); i++) {
            forward[i] = nums[i-1]*forward[i-1];
        }
        
        for(int i = nums.size() - 2; i >= 0; i--) {
            backward[i] = nums[i+1]*backward[i+1];
        }
        
        for(int i = 0; i < nums.size(); i++) {
            answer.push_back(forward[i]*backward[i]);
        }
        
        return answer;
    }
};