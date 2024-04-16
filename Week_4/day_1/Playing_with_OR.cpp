#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;
    int cnt = 0;

    for(int i=0; i<=n-k; i++)
    {
        for(int j=i; j<i+k; j++)
        {
            if(v[j] & 1){
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}