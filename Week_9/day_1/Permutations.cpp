#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n; cin>>n;

    if(n == 1) cout<<1<<endl;
    else if(n <= 3) cout<<"NO SOLUTION"<<endl;
    else {
        for(int i=1; i<=n; ++i) if((i&1) == 0) cout<<i<<" ";
        for(int i=1; i<=n; ++i) if(i&1) cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}