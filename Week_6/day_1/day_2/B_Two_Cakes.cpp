#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,a,b; cin>>n>>a>>b;

    auto ok = [&](int x)
    {
        int p1 = a/x;
        int p2 = b/x;
        return p1 and p2 and p1+p2 >= n;
    };

    int l = 1, h = a+b, ans = 0;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else h = mid-1;
    }

    cout<<ans<<endl;
}

int main()
{
    code();
    
    int tc = 1;
    // cin>>tc;

    while(tc--) solve();

    return 0;
}