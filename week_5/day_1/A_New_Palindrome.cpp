#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    string s; cin>>s;

    bool ok = true;
    for(int i=0; i<s.size()/2; i++){
        if(s[0] != s[i]) ok = false;
    }

    cout<<(ok ? "NO" : "YES")<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}