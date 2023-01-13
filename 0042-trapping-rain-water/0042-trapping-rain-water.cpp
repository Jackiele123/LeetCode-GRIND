class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int leftMax = height[0];
        int rightMax = height[height.size()-1];
        
        int ans = 0;
        
        while (left < right){
            if (leftMax < rightMax){
                left++;
                leftMax = max(leftMax,height[left]);
                ans += (leftMax - height[left]);
            }
            else{
                right--;
                rightMax = max(rightMax,height[right]);
                ans += (rightMax - height[right]);
            }
        }
        
        return ans;
    }
};