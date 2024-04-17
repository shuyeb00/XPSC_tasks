#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    int a = 0, ans = 1;

    bool ok = false;
    for(int i = __lg(n)-1; i>=0; i--)
    {
        if(n & (1<<i)){
            a |= 1<<i;
            ok = true;
        }
        else if(ok) ans *= 2;
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