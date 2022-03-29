class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         
        sort(nums.begin(), nums.end());
        int diff = INT_MAX, length = nums.size();
        
        for(int i=0; i<length && diff!=0; ++i){    
            int left = i+1, right = length - 1;
            
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                if(abs(target-sum) < abs(diff))
                    diff = target-sum;
                if(sum<target)
                    left++;
                else
                    right--;
            }
        }
        return target-diff;
    }
};
