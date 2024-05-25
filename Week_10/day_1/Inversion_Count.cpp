#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    reverse(v.begin(),v.end());
    pbds<int>ml;

    ll cnt = 0;
    for(auto u : v)
    {
        ml.insert(u);
        cnt += ml.order_of_key(u);
    }
    cout<<cnt<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}