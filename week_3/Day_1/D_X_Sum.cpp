#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int dx[] = {-1,-1,1,1};
int dy[] = {1,-1,1,-1};


void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    
    ll ans = -1e9;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ll sum = 0;
            int ci = i, cj = j;

            while(ci>=0 and ci<n and cj>=0 and cj<m)
            {
                sum += a[ci][cj];
                ci--,cj--;
            }

            ci = i, cj = j;
            while(ci>=0 and ci<n and cj>=0 and cj<m)
            {
                sum += a[ci][cj];
                ci++,cj++;
            }

            ci = i, cj = j;
            while(ci>=0 and ci<n and cj>=0 and cj<m)
            {
                sum += a[ci][cj];
                ci--,cj++;
            }

            ci = i, cj = j;
            while(ci>=0 and ci<n and cj>=0 and cj<m)
            {
                sum += a[ci][cj];
                ci++,cj--;
            }

            sum -= a[i][j]*3;
            ans = max(ans,sum);
        }
    }

    cout<<ans<<endl;

}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}