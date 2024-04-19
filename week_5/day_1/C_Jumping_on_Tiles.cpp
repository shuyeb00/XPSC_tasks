#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    string s,t; cin>>s;
    char a = s[0], b = s[s.size()-1];
    char x = min(a,b);
    char y = max(a,b);
    // cout<<a<<" "<<b<<endl;

    map<char,vector<int>>mp;
    ll cost = 0;

    int d = (s[0] < s[s.size()-1]) ? 1 : -1;

    for(int i=0; i<s.size(); i++) mp[s[i]].push_back(i+1);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=x && s[i]<=y){
            t += s[i];
        }
    }

    string nw = t;
    // cout<<nw<<endl;
    sort(t.rbegin(),t.rend());

    for(int i=0; i<t.size()-1; i++)
    {
        int x = (t[i]-'a') + 1;
        int y = (t[i+1]-'a') + 1;
        cost += abs(x-y);
    }

    cout<<cost<<" "<<t.size()<<endl;
    for (char c = s[0]; c != s[s.size()-1]+d; c += d) 
    {
        for (auto u : mp[c]) cout<<u<<" ";
    }
    cout<<endl;
    

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}