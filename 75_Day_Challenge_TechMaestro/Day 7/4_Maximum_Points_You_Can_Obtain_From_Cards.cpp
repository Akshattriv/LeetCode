class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = 0, size = cardPoints.size(),msum, sum=0, r = size-k;
        for(int i=r; i<size; ++i)
            sum += cardPoints[i];
        msum = sum;
        
        while(r<size){
            sum+= cardPoints[l]-cardPoints[r];
            msum = max(msum, sum);
            l++;r++;
        }
        return msum;
    }
};
//Sliding window
