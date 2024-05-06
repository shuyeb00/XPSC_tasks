#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    int mn = 1e9;

    for(auto &x : v) cin>>x;
    
    for(int i=0; i<n; ++i)
    {
        int curr = -1;
        for(auto j : {i-1,i+1}){
            if(j<0 || j>=n) continue;
            curr = max(curr,abs(v[i]-v[j]));
        }
        mn = min(mn,curr);
    }
    cout<<mn<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}