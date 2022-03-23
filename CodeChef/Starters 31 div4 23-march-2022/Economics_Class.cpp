#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,size,cnt,ele;
    
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        vector<int>s;
        vector<int>d;
        for(int z=0; z<size; z++){
            cin>>ele;
            s.push_back(ele);
        }
        for(int z=0; z<size; z++){
            cin>>ele;
            d.push_back(ele);
        }
        cnt=0;
        for(int i=0; i<size; i++){
            if(s[i]==d[i])
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}