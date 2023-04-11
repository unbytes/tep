/*
Website: AtCoder
Link: https://atcoder.jp/contests/abc128/tasks/abc128_e
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
#define MSOne(S) (1ull << (63 - __builtin_clz(S)))

auto solve() {
    int n, q;
    cin >> n >> q;

    vector<tuple<int, int, int>> xs;
    for (int i = 0; i < n; i++) {
        int s, t, x;
        cin >> s >> t >> x;
        xs.push_back(make_tuple(s - x, 1, x));
        xs.push_back(make_tuple(t - x, 0, x));
    }
    sort(all(xs));

    set<int> tmp;
    int d, curr = 0;
    for (int i = 0; i < q; i++) {
        cin >> d;

        while ((curr < xs.size()) and (get<0>(xs[curr]) <= d)) {
            if (get<1>(xs[curr])) tmp.insert(get<2>(xs[curr]));
            else tmp.extract(get<2>(xs[curr]));
            curr++;
        }

        if (tmp.size()) cout << *tmp.begin();
        else cout << -1;
        cout << "\n";
    }
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