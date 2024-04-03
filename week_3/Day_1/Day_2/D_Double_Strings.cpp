#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<string>v;
    map<string,int> mp;
    vector<int>ans;

    for(int i=0; i<n; i++){
        string s; cin>>s;
        v.push_back(s);
        mp[s]++;
    }

    for(string u : v)
    {
        bool ok = false;
        for(int i=0; i<u.size(); i++)
        {
            if(mp[u.substr(0,i+1)] > 0 and mp[u.substr(i+1,u.size()-(i+1))] > 0) ok = true;
        }
        if(ok) ans.push_back(1);
        else ans.push_back(0);
    }

    for(auto u : ans) cout<<u;
    cout<<endl;

}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}