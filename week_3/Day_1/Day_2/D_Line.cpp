#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll n; cin>>n;
    string s; cin>>s;
    vector<ll>v;
    ll ans = 0;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'L')
        {
            ans += i;
            ll cng = (n-1-i) - i;
            v.push_back(cng);
        }
        else{
            ans += (n-1-i);
            ll cng = i - (n-1-i);
            v.push_back(cng);
        }
    }

    sort(v.rbegin(),v.rend());

    for(int i=0; i<v.size(); i++)
    {
        if(v[i] > 0) ans += v[i];
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}