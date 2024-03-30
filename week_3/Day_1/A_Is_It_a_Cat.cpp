#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string t; cin>>t;
    string s = "";

    for(int i=0; i<t.size(); i++){
        char c = tolower(t[i]);
        s += c;
    }

    auto it = unique(s.begin(),s.end());
    s.erase(it,s.end());
    
    cout<<(s=="meow" ? "YES" : "NO")<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}