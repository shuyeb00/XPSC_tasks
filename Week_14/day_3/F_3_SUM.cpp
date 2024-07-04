#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     
    int n; cin >> n;
    map<int,int> mp;
    vector<int> v;

    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        int k = x % 10;

        if (mp[k] < 3) v.push_back(k);
        mp[k]++;
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                int x = v[i] + v[j] + v[k];
                if (x % 10 == 3) {
                    cout << "YES" << "\n";
                    return;
                }
            }
        }
    }

    cout << "NO" << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;

}