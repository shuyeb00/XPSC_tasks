#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    map<int,int>mp;
    for(auto u : v)
    {
        for(int i=2; i*i<=u; i++)
        {
            if(u%i == 0)
            {
               while(u%i == 0)
               {
                  mp[i]++;
                  u /= i;
               }
            }
        }
        if(u>1) mp[u]++;
    }

    bool ok = true;
    for(auto [x,y] : mp) if(y%n != 0) ok = false;

    cout<<(ok ? "YES" : "NO")<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}