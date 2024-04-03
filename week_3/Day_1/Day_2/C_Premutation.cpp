#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    int a[n+1][n];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<n; j++) cin>>a[i][j];
    }

    map<int,int>mp,idx;
    for(int i=1; i<=n; i++)
    {
        idx[a[i][n-1]] = i;
        mp[a[i][n-1]]++;
    }

    int first,last;
    for(auto u : mp)
    {
        if(u.second == 1) first = u.first;
        if(u.second > 1) last = u.first;
    }

    for(int i=1; i<n; i++) cout<<a[idx[first]][i]<<" ";
    cout<<last<<endl;

}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}