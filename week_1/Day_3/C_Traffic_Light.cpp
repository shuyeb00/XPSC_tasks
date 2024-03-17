#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;

    s += s;
    n += n;

    if(c == 'g'){
        cout<<0<<endl;
        return;
    }

    int cnt = 0, ans = 0, tt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == c) tt = 5;
        if(s[i] == 'g'){
            ans = max(ans,cnt);
            cnt = 0;
            tt = 0;
        }
        if(tt) cnt++;
    }

    cout<<ans<<endl;

    
}

int main()
{
    code();

    int tc; cin>>tc;
    while(tc--) solve();
}