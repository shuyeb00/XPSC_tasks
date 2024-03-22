#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,s; cin>>n>>s;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll l=0,r=0,ans=0,sum=0;

    while(r<n)
    {
        sum += v[r];
        if(sum <= s)
        {
            ans += (r-l+1);
        }
        else
        {
            while(sum > s) sum -= v[l++];
            if(sum <= s) ans += (r-l+1);
        }
        r++;
    }

    cout<<ans<<endl;

    return 0;
}