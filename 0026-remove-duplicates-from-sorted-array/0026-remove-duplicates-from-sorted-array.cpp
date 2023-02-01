class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0];
        int size = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != prev)
            {
                nums[size] = nums[i];
                size++;
            }
            prev = nums[i];
        }
        return size;
    }
};