#include <iostream>

using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

const ll MOD = 1e9 + 7;

ll power(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void solve() {
    ll n, x;
    cin >> n >> x;

    ll p = (power(2, n, MOD) - 1 + MOD) % MOD;
    
    ll ans = (p * (x % MOD)) % MOD;

    cout << ans << "\n";
}

int main() {
    FastCode;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}