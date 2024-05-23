#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    map<int,int>mp;
    
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
    }

    int cnt = 0;
    for(int i=0; i<=n; i++)
    {
        if(mp[i] == 1) cnt++;
        if(mp[i] == 0 or cnt == 2){
            cout<<i<<endl;
            return;
        }
    }

}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}