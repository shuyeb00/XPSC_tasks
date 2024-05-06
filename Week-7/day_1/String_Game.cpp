#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string s; cin>>s;

    int one = 0, zero = 0;
    for(char u : s){
        if(u == '1') one++;
        else zero++;
    }

    cout<<(min(one,zero)&1 ? "Zlatan" : "Ramos")<<endl;

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}