#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,open=0,close=0,ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='(') open++;
            else close++;
            if(close>open){
                ans++;
                open=0;
                close=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}