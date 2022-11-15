class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        if (nums.size() < 3) return result;
        

        sort(nums.begin(), nums.end());
        
        for (int curr = 0; curr < nums.size() - 2; curr++){
            
            if (nums[curr] > 0)
                break;
            if (curr > 0 && nums[curr]  == nums[curr - 1])
                continue;
            int right = nums.size() - 1;
            int left = curr + 1;
            
            while (left < right){
                int sum = nums[curr] + nums[left] + nums[right];
                
                if (sum < 0)
                    left++;
                else if (sum > 0)
                    right--;
                else{
                    
                    result.push_back({nums[curr], nums[left], nums[right]});
                    
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    left++;
                    
                    while (left < right && nums[right - 1] == nums[right]) {
                        right--;
                    }
                    right--;
                }
            }
        }
        return result;
    }
};