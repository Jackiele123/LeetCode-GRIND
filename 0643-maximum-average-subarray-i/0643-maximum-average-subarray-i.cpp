class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        int right = k - 1;
        
        double largest = 0;
        if (nums.size() == 1)
            return nums[0];
        for(int i = 0; i < k; i++)
            largest += nums[i];
        
        double total = largest;
            
        while(right < nums.size()){
            right++;
            total += nums[right];
            
            total -= nums[left];
            left++;
            
            if(total > largest)
                largest = total; 
        }
        return largest/k;
    }
};