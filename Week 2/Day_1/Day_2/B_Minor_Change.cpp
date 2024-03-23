#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    string s,t; cin>>s>>t;
    int cnt = 0;

    for(int i=0; i<s.size(); i++) if(s[i] != t[i]) cnt++;
    cout<<cnt<<endl;

    return 0;
}