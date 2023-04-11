/*
Website: UVa Online Judge
Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=442
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

void solve() {
    int n, m;
    cin >> n >> m;

    vi xs(n), ys(m);
    vin(xs);
    vin(ys);

    priority_queue<int> pql;
    priority_queue<int, vi, greater<int>> pqr;

    int last = 0;
    for (size_t j = 0; j < m; j++) {
        for (size_t i = last; i < ys[j]; i++) {
            if (pql.size() < j + 1) {
                if (pqr.size() and (xs[i] > pqr.top())) {
                    pqr.push(xs[i]);
                    pql.push(pqr.top());
                    pql.pop();
                }
                else pql.push(xs[i]);
            }
            else {
                if (xs[i] < pql.top()) {
                    pql.push(xs[i]);
                    pqr.push(pql.top());
                    pql.pop();
                }
                else pqr.push(xs[i]);
            }
        }
        last = ys[j];
        if (pql.size() < j + 1) {
            pql.push(pqr.top());
            pqr.pop();
        }
        cout << pql.top() << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    cin >> t;

    while (t--) {
        string blank;
        getline(cin, blank);

        solve();
        if (t) cout << "\n";
    }

    return 0;
}
