class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k,l,temp;
        int n = nums.size();
            
        for(k = n-2; k>=0 ;k--){
            if(nums[k]<nums[k+1])
               break;
        }
        if(k<0){
            sort(nums.begin(),nums.end());
        }
        else{
            for(l = n-1; l>k; l--){
                if(nums[l]>nums[k])
                    break;
            }
            swap(nums[l],nums[k]);
            sort(nums.begin()+k+1, nums.end());
        }
    }
};
