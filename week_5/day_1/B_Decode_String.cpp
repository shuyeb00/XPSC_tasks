#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string s,ans; cin>>s;
    // string ans = "";

    for(int i=n-1; i>=0; i--)
    {
        int c = s[i]-'0';
        if(s[i] == '0')
        {
            c = stoi(s.substr(i-2,2));
            ans += char((c-1)+'a');
            i -= 2;
        }
        else ans += char((c-1)+'a');
    }

    reverse(ans.begin(),ans.end());
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