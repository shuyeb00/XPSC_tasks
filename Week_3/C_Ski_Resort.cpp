#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--)
    {
        ll n,k,q; cin>>n>>k>>q;
        vector<ll>v(n);
        for(auto &x : v) cin>>x;

        ll cnt = 0, ans = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i] > q) cnt = 0;
            else cnt++;

            if(cnt >= k) ans += (cnt-k)+1;
        }

        cout<<ans<<endl;
    }

    return 0;
}