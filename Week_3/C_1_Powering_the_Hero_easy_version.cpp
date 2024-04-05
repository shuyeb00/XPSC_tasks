#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    priority_queue<ll>pq;
    ll sum = 0;

    for(int i=0; i<n; i++)
    {
        if(v[i] != 0) pq.push(v[i]);
        else
        {
            if(!pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
        }
    }
    cout<<sum<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}