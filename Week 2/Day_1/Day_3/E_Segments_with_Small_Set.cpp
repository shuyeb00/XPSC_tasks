#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,k; cin>>n>>k;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    ll ans = 0;
    int l = 0, r = 0;
    deque<ll>dq;
    map<ll,ll>mp;

    while(r<n)
    {
        dq.push_back(v[r]);
        mp[v[r]]++;

        while(mp.size() > k)
        {
            mp[dq.front()]--;
            if(mp[dq.front()] == 0) mp.erase(dq.front());
            dq.pop_front();
        }

        ans += dq.size();
        r++;
    }

    cout<<ans<<endl;

    return 0;
}