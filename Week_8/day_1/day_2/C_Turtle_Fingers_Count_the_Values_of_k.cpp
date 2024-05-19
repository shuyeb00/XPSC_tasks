#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    ll a,b,l; cin>>a>>b>>l;
    set<ll>st;
    ll x = 0;

    while(1)
    {
        if(int(pow(a,x))>l or l%int(pow(a,x)) != 0) break;
        ll k = l/int(pow(a,x));

        st.insert(k);
        while(k%b == 0){
            k /= b;
            st.insert(k);
        }
        x++;
    }

    cout<<st.size()<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}