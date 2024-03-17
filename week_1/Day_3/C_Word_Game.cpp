#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    string a[3][n];
    map<string,int>mp;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }

    int cnt = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(mp[a[i][j]] == 2) cnt += 1;
            else if(mp[a[i][j]] == 1) cnt += 3;
        }
        cout<<cnt<<" ";
        cnt = 0;
    }
    cout<<endl;
}

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--) solve();

    return 0;
}