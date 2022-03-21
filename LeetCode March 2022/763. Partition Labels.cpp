class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>map;
        for(int i=0; i<s.length(); ++i){
            map[s[i]] = i;
        }

        int size=0, end=0, temp;
        vector<int>res {};
        
        for(int i=0; i<s.length(); i++){
            ++size;
            end = max(end, map.at(s[i]));
                    
            if(i==end){
                res.push_back(size);
                size = 0;
            }
        }
        return res;
    }
};
