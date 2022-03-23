#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,d;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>x>>y>>d;
        abs(x-y)<=d ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}