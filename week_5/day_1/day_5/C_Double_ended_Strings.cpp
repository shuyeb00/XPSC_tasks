#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    string s,t; cin>>s>>t;
    int ans = 0;

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<t.size(); j++)
        {
            int a = i, b = j;
            int ln = 0;
            while(a<s.size() and b<t.size() and s[a++] == t[b++]) ln++;
            ans = max(ans,ln);
        }
    }
    cout<<s.size()+t.size() - ans*2<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}