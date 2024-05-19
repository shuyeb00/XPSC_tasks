#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int n = 1e6;
vector<int>v;
vector<bool>prime(n+1,true);

void sieve()
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i])
        {
            for(int j=i+i; j<=n; j+=i) prime[j] = false;
        }
    }

    for(int i=2; i<=n; i++) if(prime[i]) v.push_back(i);
}
void solve()
{
    int d; cin>>d;
    
    int p1,p2;
    bool f1 = true, f2 = false;

    for(int i=0; i<n; i++)
    {
        if(f1 && v[i]-1 >= d)
        {
            p1 = v[i];
            f1 = false;
            f2 = true;
        }
        else if(f2 && v[i]-p1 >= d)
        {
            p2 = v[i];
            break;
        }
    }

    cout<<(p1/__gcd(p1,p2))*p2<<endl;
    
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    sieve();

    while(tc--) solve();

    return 0;
}