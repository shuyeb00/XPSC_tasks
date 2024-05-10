#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve()
{
    int n; cin>>n;
    vector<int>v;
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        int tmp = cnt + (!v.empty() and v.back() > x);

        if(tmp == 0 or (tmp == 1 and x <= v[0])){
            v.push_back(x);
            cnt = tmp;
            cout<<1;
        }
        else cout<<0;
    }
    cout<<endl;

    // int q;
    //     cin >> q;
    //     vector<int> a;
    //     int cnt = 0;
    //     for (int i = 0; i < q; ++i) {
    //         int x;
    //         cin >> x;
    //         int nw_cnt = cnt + (!v.empty() && v.back() > x);
    //         if (nw_cnt == 0 || (nw_cnt == 1 && x <= v[0])) {
    //             v.push_back(x);
    //             cnt = nw_cnt;
    //             cout << '1';
    //         } else {
    //             cout << '0';
    //         }
    //     }
    //     cout << '\n';
}

int main()
{
    code();
    
    int tc;
    cin>>tc;

    while(tc--) solve();

    return 0;
}