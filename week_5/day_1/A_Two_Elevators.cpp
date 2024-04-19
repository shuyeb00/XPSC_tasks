#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int first = a-1;
    int second = abs(b-c) + abs(c-1);

    if(first == second) cout<<3<<endl;
    else if(first < second) cout<<1<<endl;
    else cout<<2<<endl;

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}