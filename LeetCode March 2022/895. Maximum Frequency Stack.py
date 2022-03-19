class FreqStack {
public:
    unordered_map<int,int> frequency;
    unordered_map<int,stack<int>> s;
    int max_frequency=0;
    FreqStack() {
        
    }
   
    void push(int val) {
       
        frequency[val]++;
        max_frequency=max(max_frequency,frequency[val]);
        s[frequency[val]].push(val);
    }
    
    int pop() {
       
        int top_max_frequency= s[max_frequency].top();
        s[max_frequency].pop();
        frequency[top_max_frequency]--;
        if(s[max_frequency].size()==0)
            max_frequency--;
        return top_max_frequency;
    }
};
