#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n,k; cin>>n>>k;

    int l = 1, h = 2e9+7, ans = 0;
    while(l<=h)
    {
        int mid = l+(h-l)/2;

        if(mid - mid/n >= k)
        {
            ans = mid;
            h = mid-1;
        }
        else l = mid+1;
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