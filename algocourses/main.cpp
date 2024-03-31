#ifdef MILFS#define _GLIBCXX_DEBUG
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

#define int long long
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


signed main() {
    SCONF();  
    string s;
    cin >> s;
    cout << s;
}