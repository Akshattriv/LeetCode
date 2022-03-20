class Solution {
public:
    int Swaps(int target, vector<int>A, vector<int>B){
        int numSwaps = 0;
        for(int i=0; i<A.size(); ++i){
            if(A[i] != target && B[i] != target)
                return INT_MAX;  //Can't return -1, so returning this, will check there
            else if(A[i] != target)
                numSwaps++; //else, A[i] == target, where we do nothing, hence didn't write
        }
        return numSwaps;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
       int minSwaps = min(Swaps(tops[0],tops,bottoms), Swaps(tops[0],bottoms,tops));
        minSwaps = min(Swaps(bottoms[0],tops,bottoms), minSwaps);
        minSwaps = min(minSwaps, Swaps(bottoms[0],bottoms,tops));
        return minSwaps == INT_MAX ? -1: minSwaps;
    }
};
