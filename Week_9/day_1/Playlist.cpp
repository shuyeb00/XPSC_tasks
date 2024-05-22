#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;
    set<ll>st;

    int ans = 0;
    int i = 0;

    for(ll u : v)
    {
        while(st.find(u) != st.end())
        {
            st.erase(v[i]);
            i++;
        }
        st.insert(u);
        ans = max(ans,(int)st.size());
    }

    cout<<ans<<endl;

    return 0;
}