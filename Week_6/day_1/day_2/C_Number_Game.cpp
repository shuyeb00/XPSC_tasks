#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;
    

    auto ok = [&](int k)
    {
        multiset<int>ml;
        for(auto u : v) ml.insert(u);
        
        for(int i=1; i<=k; i++)
        {
            int A = k-i+1, B = k-i+1;
            auto it = ml.upper_bound(A);
            if(it == ml.begin()) return 0;

            it--;
            ml.erase(it);
            if(!ml.empty())
            {
                ml.insert(*ml.begin()+B);
                ml.erase(ml.begin());
            }
        }
        return 1;
    };

    int l=0,r=2*n,ans = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}