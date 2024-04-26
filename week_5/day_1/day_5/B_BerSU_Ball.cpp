#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;
    vector<int>a(n);
    for(auto &x : a) cin>>x;

    int m; cin>>m;
    vector<int>b(m);
    for(auto &x : b) cin>>x;

    int ans = 0;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(abs(a[i]-b[j]) <= 1)
            {
                ans++;
                a[i] = -1;
                b[j] = -1;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}

