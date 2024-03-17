#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    ll x,y;
    cin>>x>>y;

    int cnt = 0;
    while(x <= y){
        cnt++;
        x *= 2;
    }

    cout<<cnt<<endl;

    return 0;
}