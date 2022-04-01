class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res=0;
        for(int i=0; i<nums.size(); ++i){
            res ^= nums[i];
            res ^= i;
        } res = res^nums.size();
        return res;
    }
};
/*class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), res= (n*(n+1))/2;
        
        for(int i=0; i<nums.size(); ++i){
            res -= nums[i];
        }
        return res;
    }
};*/
// 2 awesome solutions 
