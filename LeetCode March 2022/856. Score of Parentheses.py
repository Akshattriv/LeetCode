class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stack;
        int ind = 0;
        
        for(auto i:s){
            if(i=='('){
                stack.push(ind);
                ind = 0;
            }else{
                ind = stack.top() + max(ind*2,1);
                stack.pop();
            }
        }
        return ind;
    }
};
