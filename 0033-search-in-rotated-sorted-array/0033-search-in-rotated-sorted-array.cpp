class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right){
            
            int middle = left + (right - left)/2;
             std::cout << middle << std::endl;
            
            if (nums[middle] == target)
                return middle;
            if (nums[left] == target)
                return left;
            if (nums[right] == target)
                return right;
            
            if (nums[left] <= nums[middle]){
                if (nums[left] <= target && target <= nums[middle])
                    right = middle - 1;
                else
                    left = middle + 1;   
            }
            else{
                if (nums[middle] <= target && target <= nums[right])
                    left = middle + 1;
                else
                    right = middle - 1; 
            }
  
        }
        return -1;
    }
};