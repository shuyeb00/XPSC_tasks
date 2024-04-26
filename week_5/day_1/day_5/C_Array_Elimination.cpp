#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n),cnt(32);
    for(auto &x : v) cin>>x;

    for(int i=0; i<32; i++)
    {
        for(int j=0; j<n; j++) if(v[j] & (1<<i)) cnt[i]++;
    }

    vector<int>ans;
    for(int i=1; i<=n; i++)
    {
        bool check = true;
        for(int j=0; j<32; j++)
        {
            if(cnt[j] % i != 0){
                check = false;
                break;
            }
        }
        if(check) ans.push_back(i);
    }

    sort(ans.begin(),ans.end());
    for(auto u : ans) cout<<u<<" ";
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