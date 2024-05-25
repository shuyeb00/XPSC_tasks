#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    pbds<pair<int,int>>p;
    int idx = 0;

    for(int i=0; i<n; i++)
    {
        p.insert({v[i],i});

        if((int)p.size() == k)
        {
            int x = 0;
            if(k & 1) x = k/2;
            else x = min(k/2,(k/2)-1);

            pair<int,int> pp = *p.find_by_order(x);
            cout<<pp.first<<" ";

            p.erase(p.find({v[idx],idx}));
            idx++;
        }
    }
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}