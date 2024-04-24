#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll n,l,r,x; cin>>n>>l>>r>>x;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll cnt = 0;
    for(int i=0; i<(1<<n); i++)
    {
        vector<int>tmp;
        ll sum = 0;

        for(int j=0; j<n; j++)
        {
            if(i & 1<<j) tmp.push_back(1);
            else tmp.push_back(0);
        }

        int mn = 1e9;
        int mx = -1e9;
        int one = 0;

        for(int k=0; k<tmp.size(); k++)
        {
            if(tmp[k] == 1)
            {
                sum += v[k];
                if(v[k] < mn) mn = v[k];
                if(v[k] > mx) mx = v[k];
                one++;
            }
        }

        if(one > 1 && mx-mn >= x && sum >= l && sum <= r) cnt++;

        // for(auto u : tmp) cout<<u<<" ";
        // cout<<endl;
    }

    cout<<cnt<<endl;

    return 0;
}