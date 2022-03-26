class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ele=nums[0],j=1;
        
        for(int i=1; i<nums.size(); ++i){
            if(nums[i] != ele){
                ele = nums[i];
                nums[j] = nums[i];
                ++j;
            }
        }
        return j;
    }
};
// a messy 2 pointer approach, can tweak it a bit more.
