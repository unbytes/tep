/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc043/tasks/abc043_b
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end()
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))

auto solve() {
    string s, ans = "";
    cin >> s;

    for (auto c : s) {
        switch (c) {
        case '0':
            ans.push_back('0');
            break;
        case '1':
            ans.push_back('1');
            break;
        default:
            if (ans.size()) ans.pop_back();
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
