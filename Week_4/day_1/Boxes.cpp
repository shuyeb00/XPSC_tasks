#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    sort(v.rbegin(),v.rend());
    int box = 1;
    ll ck = v[0];

    for(int i=1; i<n-1; i++)
    {
        if((ck^v[i]) < v[i+1]){
            box++;
            ck = v[i+1];
        }
        ck ^= v[i];
    }

    cout<<box<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}