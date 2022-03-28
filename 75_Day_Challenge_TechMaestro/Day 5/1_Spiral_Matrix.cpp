class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int dir=0,left = 0, right = matrix[0].size(), bot = matrix.size(), top = 0;
        while(left<right && top<bot){
            if(dir == 0){
                for(int i=left; i<right; ++i){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }else if(dir == 1){
                for(int i=top; i<bot; ++i){
                    res.push_back(matrix[i][right-1]);
                }
                right--;
            }else if(dir == 2){
                for(int i=right-1; i>=left; --i){
                    res.push_back(matrix[bot-1][i]);
                }
                bot--;
            }else if(dir == 3){
                for(int i=bot-1; i>=top; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return res;
    }
};
