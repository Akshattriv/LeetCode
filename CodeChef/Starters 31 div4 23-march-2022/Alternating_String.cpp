#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,size;string s; int zero,one;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        cin>>s;
        zero = 0; one = 0;
        for(auto it:s){
            if(it == '0')
                ++zero;
            else    
                ++one;
        }
        if(zero == one){
            cout<<zero*2<<endl;
        }else if(abs(zero-one)==1)
            cout<<zero+one<<endl;
        else if(zero == 0 || one == 0)
            cout<<1<<endl;
        else{
            cout<<min(zero,one)*2+1<<endl;
        }
    }
    return 0;
}