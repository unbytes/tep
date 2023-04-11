/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc117/tasks/abc117_d
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define all(x) x.begin(), x.end();
#define vin(vt) for (auto &e : vt) cin >> e
#define LSOne(S) ((S) & -(S))
#define MSOne(S) (1 << (63 - __builtin_clz(S)))

auto solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> xs(n), ones(63, 0);
    vin(xs);

    for (auto v : xs) for (ll i = 0; i < ones.size(); i++) if ((1ll << i) & v) ones[i]++;

    ll ans = 0, fn = 0;
    for (int i = ones.size() - 1; i >= 0; i--) {
        if ((((1ll << i) | ans) <= m) and (ones[i] <= n / 2)) ans |= 1ll << i;
    }

    for (auto v : xs) fn += v ^ ans;
    cout << fn << "\n";
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
