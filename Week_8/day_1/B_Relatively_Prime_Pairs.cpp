#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll l,r; cin>>l>>r;
    ll x = l;
    
    cout<<"YES"<<endl;
    for(int i=1; i<=(r-l+1)/2; i++){
        cout<<x<<" "<<x+1<<endl;
        x += 2;
    }

    return 0;
}