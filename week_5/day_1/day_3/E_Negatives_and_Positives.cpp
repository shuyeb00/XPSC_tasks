#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v(n);
    
    ll sum = 0;
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]<0)
        {
            cnt++;
            v[i] *= -1;
        }
        sum += v[i];
    }

    sort(v.begin(),v.end());

    if(cnt & 1) sum -= v[0] * 1<<1;

    cout<<sum<<endl;
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}