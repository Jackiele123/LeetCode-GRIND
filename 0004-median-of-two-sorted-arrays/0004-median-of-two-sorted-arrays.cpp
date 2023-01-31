class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int totalSize = nums1.size() + nums2.size();
        int arr1 = 0;
        int arr2 = 0;
        int size = 0;
        
        float ans;
        
        if (totalSize % 2)
            size = (totalSize+1)/2;
        else
            size = (totalSize/2) + 1;
        std::cout << size << std::endl;
        if (nums1.empty() || nums2.empty())
        {
            if(totalSize % 2)
            {
                if(nums1.empty())
                    ans = nums2[size - 1];
                else
                     ans = nums1[size - 1];
            }
            else
            {
                if(nums1.empty())
                    ans = (nums2[size-1] + nums2[size-2])/2.0f;
                else
                    ans = (nums1[size - 1] + nums1[size - 2])/2.0f;
            }
            return ans;
        }
        
        float res[size];
        
        
        for (int i = 0; i < size; i++)
        {       
            if (arr1 >= nums1.size())
            {
                res[i] = nums2[arr2];
                arr2++;
            }
            else if (arr2 >= nums2.size())
            {
                res[i] = nums1[arr1];   
                arr1++;
            }
            else
            {
                if (nums1[arr1] <= nums2[arr2])
                {
                    res[i] = nums1[arr1];
                    arr1++;
                }
                else
                {
                    res[i] = nums2[arr2];
                    arr2++;
                }
            }
        }
        
        for (int i = 0; i < size; i++)
            std::cout << res[i] << std::endl;
        
        if(totalSize % 2)
            ans = res[size - 1];
        else
            ans = (res[size - 1] + res[size - 2])/2;
        
        return ans;
    }
};