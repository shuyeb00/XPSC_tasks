#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x : v) cin>>x;

    set<int>st;
    vector<int>op;

    for(int i=1; i<=n; i++) st.insert(i);
    for(auto u : v)
    {
        if(st.find(u) != st.end()) st.erase(u);
        else op.push_back(u);
    }

    sort(op.rbegin(),op.rend());
    for(auto u : op)
    {
        int x = *st.rbegin();
        if(x > (u-1)/2){
            cout<<-1<<endl;
            return;
        }
        st.erase(x);
    }
    cout<<op.size()<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}