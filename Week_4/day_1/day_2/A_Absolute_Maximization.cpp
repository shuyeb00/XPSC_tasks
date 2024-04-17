#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    int OR = 0,AND = -1;
    vector<int>v(n);

    for(auto &x : v)
    {
        cin>>x;
        OR |= x;
        AND &= x;
    }
    cout<<OR-AND<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}