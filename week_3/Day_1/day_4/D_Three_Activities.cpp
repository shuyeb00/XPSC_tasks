#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<pair<ll,ll>>a(n),b(n),c(n);

    for(int i=0; i<n; i++)
    {
        ll x; cin>>x;
        a[i] = {x,i+1};
    }
    for(int i=0; i<n; i++)
    {
        ll x; cin>>x;
        b[i] = {x,i+1};
    }
    for(int i=0; i<n; i++)
    {
        ll x; cin>>x;
        c[i] = {x,i+1};
    }
    

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

    int cnt = 0;

    ll sum = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if(a[i].second != b[j].second and b[j].second != c[k].second and a[i].second != c[k].second)
                sum = max(a[i].first+b[j].first+c[k].first,sum);
            }
        }
    }

    cout<<sum<<endl;

    // for(auto u : a) cout<<u.first<<" ";
    // cout<<endl;
    // for(auto u : a) cout<<u.first<<" ";
    // cout<<endl;
    // for(auto u : a) cout<<u.first<<" ";
    // cout<<endl;

}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}