#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    map<int,int>mp;

    for(int i=0; i<n; i++) {
        int x; cin>>x;
        mp[x]++;
    }

    int unq = 0, multi = 0;
    for(auto [x,y] : mp) {
        if(y < 2) unq++;
        else multi++;
    }

    cout<< multi + (unq+1)/2 <<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}