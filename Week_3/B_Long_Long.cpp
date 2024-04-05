#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    ll sum = 0; bool ok = true;

    vector<ll>v(n);
    for(auto &x : v)
    {
        cin>>x;
        if(x<0) ok = false;
        sum += abs(x);
    }

    // if(ok) cout<<sum<<" "<<0<<endl;

    bool flag = true;
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        if(v[i] < 0 ) flag = false;
        else if(v[i] > 0 && !flag)
        {
            cnt++;
            flag = true;
        }
    }

    if(!flag) cnt++;
    cout<<sum<<" "<<cnt<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}