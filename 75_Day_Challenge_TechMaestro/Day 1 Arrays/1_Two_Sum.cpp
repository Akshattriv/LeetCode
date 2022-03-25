class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp; //Stores elements unordered so that you don't require traversal of elements
        vector<int>ans; // Function wants a vector returned
        
        for(int i=0; i<nums.size(); ++i){
            if(mp.find(target-nums[i]) != mp.end()){ //Finds the element, if exists it won't point to the end of the hash table
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
