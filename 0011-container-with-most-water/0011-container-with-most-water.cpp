class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        
        int maxArea = 0;
        while (left < right)
        {
            int width = right - left;
            bool leftIsTaller = false;
            int shortest = 0;
            if (height[left] >= height[right]){
                shortest = height[right];
                leftIsTaller = true;
            }
            else {
                shortest = height[left];
                leftIsTaller = false;
            }
            if ((width*shortest) > maxArea)
                maxArea = width*shortest;
            
            if (leftIsTaller)
                right--;
            else
                left++;
        }
        return maxArea;
    }
};