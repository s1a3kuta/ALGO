#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define pll pair <ll, ll>
#define f first
#define s second
#define pb push_back
#define vll vector <ll>
#define tlll tuple <ll, ll, ll>
#define pf push_front
#define mt make_tuple
#define pss pair <string, string>
#define all(x) x.begin(), x.end()

using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
template <typename K, typename V>
using hash_table = gp_hash_table<K, V>;

ll find_min(const vll &a) {
    ll ans = 1;
    for (ll i = 1; i < a.size() - 1; ++i)
        if (a[ans] + a[ans - 1] > a[i] + a[i - 1])
            ans = i;
    return ans;
}

void print(vll &a) {
    for (ll i : a)
        cout << i << " ";
    cout << "\n";
    return;
}

signed main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n, inf = 1e18, sum = 0;
    cin >> n;
    vll a(n + 2);
    a[0] = a[n + 1] = inf;
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
    // print(a);
    while (a.size() > 3) {
        ll f = find_min(a);
        a[f] += a[f - 1];
        sum += a[f];
        a.erase(a.begin() + f - 1);
        // print(a);
    }
    cout << sum;
    return 0;
}
