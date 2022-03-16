class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stack;
        int i = 0;
            
        for(auto s: pushed){
            stack.push(s);
            while(!stack.empty() && stack.top() == popped[i]){
                ++i;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
