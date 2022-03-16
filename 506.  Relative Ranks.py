class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        s = sorted(score)[::-1]
        h = {}
        ans = []
        
        k = 1
        for i in s:
            h[i] = k
            k+=1
        for i in score:
            if h[i]==1:
                ans.append("Gold Medal")
            elif h[i] == 2:
                ans.append("Silver Medal")
            elif h[i] == 3:
                ans.append("Bronze Medal")
            else:
                ans.append(str(h[i]))
        return ans
