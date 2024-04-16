#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int pr = 0, must = 0, l = 0, r = n-1;
    while(l<r)
    {
        if(s[l] == s[r]) pr += 2;
        else must++;
        l++,r--;
    }

    for(int i=0; i<=n; i++)
    {
        int ans = i;
        ans -= must;

        if(ans < 0){
            cout<<0;
            continue;
        }

        ans = max((ans%2), ans-pr);
        ans = max(0,ans-(n%2));

        cout<<(ans ? "0" : "1");
    }
    cout<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}