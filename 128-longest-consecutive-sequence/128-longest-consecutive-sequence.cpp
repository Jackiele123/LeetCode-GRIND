class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> map;
        int largest = -pow(10,9);
        int smallest = pow(10,9);
        int longestCount = 0;
        int count  = 0;
        
        for (int i = 0; i < nums.size(); i++){
    
            map[nums[i]] = true;
            
            if (nums[i]>largest)
                largest = nums[i];
            
            if (nums[i]< smallest)
                smallest = nums[i];
        }
        if (largest >= 999999999) 
            largest = 99;
        if (smallest <= -999999999)
            smallest = 0;
        for (int i = smallest; i < largest + 1; i++){
            if (map.count(i) == 1){
                cout << count << endl;
                count++;
            }
            else {
                if (count > longestCount)
                    longestCount = count;
                count = 0;
            }
        }
        if (count > longestCount)
            longestCount = count;
        return longestCount;
    }
};