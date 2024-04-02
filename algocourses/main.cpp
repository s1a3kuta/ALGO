#ifdef MILFS
#define _GLIBCXX_DEBUG
#define _GLIBCXX_DEBUG_PEDANTIC
#endif

#pragma GCC optimize("O3")
#include "bits/stdc++.h"

#define F first
#define get_log(x) (31 - __builtin_clz(x))
#define S second
#define pb push_back
#define all(a) a.begin(), a.end()
#define fr(i, a, b) for (auto i = (a); i < (b); i++)
#define rf(i, a, b) for (auto i = (a); i >= (b); i--)
#define sz(x) (int)x.size()
#define nl '\n'

// #define int long long
using namespace std;

void SCONF() {
    #ifdef MILFS
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    #endif
}

using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;
using vpi = vector<pi>;
using vvi = vector<vi>;
using vb = vector<bool>;

const int INF = 1e9;
const ll INFLL = 1e18;
const int MAXN = 200001;
const int LOG = 21;
const int MOD = INF + 7;
const string ANS[] = {"NO", "YES"};

vvi dp(1 << 17, vi(17, INF)), p(1 << 17, vi(17, -1));
vvi g(17, vi(17));

signed main() {
    SCONF();  
    int n;
    cin >> n;
    if (n == 1) {
        cout << "0\n1"; 
        return 1488;
    }
    fr(i, 0, n) {
        fr(j, 0, n) {
            cin >> g[i][j];
        }
    }
    fr(i, 0, n) dp[1 << i][i] = 0;
    fr(mask, 1, 1 << n) {
        if (1 & mask == 0) {
            cout << mask << nl;
            continue;
        }
        fr(i, 0, n) {
            if (dp[mask][i] != INF) {
                fr(u, 0, n) {
                    if (g[i][u] > 0 && !(mask & (1 << u)) && 
                    dp[mask | (1 << u)][u] > dp[mask][i] + g[i][u])
                     dp[mask | (1 << u)][u] = dp[mask][i] + g[i][u];
                     p[mask | (1 << u)][u] = i;
                }
            }
        }
    }
    fr(i, 0, n) {
        cout << dp[(1 << n) - 1][i] << " \n"[i == n - 1];
    }
}