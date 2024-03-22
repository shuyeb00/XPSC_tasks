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

    ll l=0,ans = n+1, sum = 0;

    for (int i=0; i<n; i++) 
    {
        sum += v[i];
        if (sum < s) continue;
        while (sum >= s) 
        {
            sum -= v[l];
            l++;
        }
        ans = min(ans,i-l+2);
    }

    if(ans > n) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}