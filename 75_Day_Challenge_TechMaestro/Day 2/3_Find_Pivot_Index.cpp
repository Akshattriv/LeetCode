class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0,right;
        for(auto it:nums)
            right += it;
        for(int i=0; i<nums.size(); ++i){
            right = right - nums[i];
            if(right == left)
                return i;
            left = left + nums[i];
        }
        return -1;
    }
};
