class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele,count=0;
        for(int i=0; i<nums.size(); ++i){
            if(count == 0)
                ele = nums[i];
            if(nums[i] != ele)
                count -=1;
            if(nums[i] == ele)
                count +=1;
        }
        return ele;
    }
};// space O(1), time O(n). traverses across the array once, Moore Voting Algorithm.
