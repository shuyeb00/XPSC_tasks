#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(ll n)
{
    if(n ==  1) return false;
    for(ll i=2; i*i<=n; i++) if(n%i == 0) return false;
    return true;
}

// bo
bool isSquare(ll n)
{
    ll x = sqrtl(n);
    return x*x == n;
}

int main()
{
    code();
    
    int n; cin>>n;
    vector<ll>v(n);
    for(auto &x : v) cin>>x;

    for(auto u : v) cout<<(isPrime(sqrtl(u)) and isSquare(u) ? "YES" : "NO")<<endl;

    return 0;
}