class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left  = 0;
        int right = nums.size() - 1;
        
        if (nums[left] < nums[right])
            return nums[left];
        
        while(left < right){
            int middle = left + (right -left)/2;
            if (nums[right] < nums[middle])
                left = middle + 1;
            else 
                right = middle;
        }
        return nums[left];

    }
};