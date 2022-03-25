class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0, i=0;
        while(right<nums.size()){
            if(nums[i] == 0){
                right ++;
            }else{
                swap(nums[right], nums[left]);
                left++;right++;
            }
            i++;
        }
    }
};
