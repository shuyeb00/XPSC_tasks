#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    ll sum = 0;

    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        v.push_back(x);
        sum += x;
    }

    ll pre = 0, ans = -1;
    for(int i=0; i<n-1; i++)
    {
        pre += v[i];
        sum -= v[i];
        ans = max(__gcd(pre,sum),ans);
    }

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}