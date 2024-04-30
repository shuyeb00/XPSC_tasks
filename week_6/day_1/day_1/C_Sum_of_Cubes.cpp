#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int mx = 1e4;

bool check(vector<ll>&v, ll x)
{
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(v[mid] == x) return true;
        else if(v[mid] < x) l = mid+1;
        else r = mid-1;
    }
    return false;
}

void solve()
{
    ll x; cin>>x;
    vector<ll>cube;

    for(int i=1; i<=mx; i++) cube.push_back(pow(i,3));
    
    bool ok = false;
    for(int i=1; i<=mx; i++)
    {
        if(check(cube,x-(pow(i,3)))) ok = true;
    }
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