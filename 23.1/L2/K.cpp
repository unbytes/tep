#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

unordered_map<int, ii> memo;
void solve() {
    int i = 1, j = 1, cnt = 1;
    while (memo.size() <= 10000000) {
        memo[cnt++] = { i, j };
        j++;
        while (j > 1) memo[cnt++] = { i++, j-- };
        memo[cnt++] = { i, j };
        i++;
        while (i > 1) memo[cnt++] = { i--, j++ };
    }

    int n;
    while (scanf("%d", &n) != EOF) cout << "TERM " << n << " IS " << memo[n].first << "/" << memo[n].second << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}