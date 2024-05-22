#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    code();
    
    int n,m; cin>>n>>m;
    multiset<int>ml;

    for(int i=0; i<n; i++){
        int x; cin>>x;
        ml.insert(x);
    }

    for(int i=0; i<m; i++)
    {
        int x; cin>>x;
        auto it = ml.upper_bound(x);

        if(it == ml.begin()) cout<<-1<<endl;
        else{
            it--;
            cout<<*it<<endl;
            ml.erase(it);
        }
    }

    return 0;
}