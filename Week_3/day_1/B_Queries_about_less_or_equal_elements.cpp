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
    int n,m; cin>>n>>m;
    pbds<int>a;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.insert(x);
    }

    for(int i=0; i<m; i++){
        int x; cin>>x;
        cout<<a.order_of_key(x+1)<<' ';
    }
    cout<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}