#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    for(int i=0; i<(1<<n); ++i)
    {
        ll sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i & (1<<j)) sum += v[j];
            else sum -= v[j];
        }

        if(sum % 360 == 0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}