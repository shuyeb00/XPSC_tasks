#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];

    for(int i=1; i<=n; i++)
    {
        bool ok = false;
        for(int j=2; j<=i+1; j++)
        {
            if(v[i]%j != 0)
            {
                ok = true;
                break;
            }
        }

        if(!ok){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}