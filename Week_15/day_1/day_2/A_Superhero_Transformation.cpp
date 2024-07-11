#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' ||
    ch == 'o' || ch == 'u';
}

void solve() {
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
        cout << "No" << "\n";
        return;
    }

    for (int i = 0; i < a.size(); i++) {
        if (isVowel(a[i]) != isVowel(b[i])) {
            cout << "No" << "\n";
            return;
        }
    }

    cout << "Yes" << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    //cin >> tc;

    while(tc--) {
        solve();
    }

    return 0;

}