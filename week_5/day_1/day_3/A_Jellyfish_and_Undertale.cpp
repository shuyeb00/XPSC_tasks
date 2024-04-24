#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll tc; cin>>tc;
    while(tc--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];

        ll sum = b;
        for(int i=0; i<n; i++)
        {
            sum += min(arr[i],a-1);
        }

        cout<<sum<<endl;
    }

    return 0;
}