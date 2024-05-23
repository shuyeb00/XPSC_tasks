#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    string s; cin>>s;
    int n = s.size();
    map<char,int>mp;

    for(auto u : s) mp[u]++;

    int cnt = 0;
    for(auto [x,y] : mp) if(y&1) cnt++;

    if(cnt>1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    string ans(n,' ');
    int l = 0, r = n-1;

    for(auto u : s)
    {
        if(mp[u] & 1){
            ans[n/2] = u;
            mp[u]--;
        }
        
        while(mp[u])
        {
            ans[l++] = ans[r--] = u;
            mp[u] -= 2;
        }
    }

    cout<<ans<<endl;

    return 0;
}