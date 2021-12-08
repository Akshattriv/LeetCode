class Solution:
    def balancedStringSplit(self, s: str) -> int:
        cnt = 1
        answer=0
        i = 0
        length = len(s)
        while(i<length):
            g = s[i]
            hashmap={'L':0 , 'R':0}
            hashmap[g]+=1
            i+=1
            while(i<length and hashmap['L']!=hashmap['R']):
                if s[i] == 'L':
                    hashmap['L']+=1
                else:
                    hashmap['R']+=1
                i+=1
            hashmap['L']=hashmap['R']=0
            answer+=1
        return answer
    
