class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0, right = height.size()-1, res=0,area = 0;
        while(left<right){
            area = min(height[left], height[right]) * (right - left);
            res = max(area,res);
            if(height[left] < height[right]) left++;
            else if(height[right] <= height[left]) right--;
        }
        return res;
    }
};
