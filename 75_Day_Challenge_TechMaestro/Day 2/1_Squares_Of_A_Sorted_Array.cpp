class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        int left = 0, right = nums.size()-1,sqleft,sqright;
        
        for(int i=nums.size()-1; i>-1; i--){
            sqleft = nums[left]*nums[left]; sqright = nums[right]*nums[right];
            if(sqleft < sqright){
                res[i] = sqright;
                right--;
            }else{
                res[i] = sqleft;
                left++;
            }
        }
        return res;
    }
};
//Two pointer approach, one from start, one from end.
