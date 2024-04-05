#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll sum = n;

        while(n)
        {
            n /= 2;
            sum += n;
        }
        cout<<sum<<endl;
    }

    return 0;
}