#include <iostream>
#include <string>

using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 

// دالة الأسس السريعة
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

int main() {
    FastCode;

    string s; 
    cin>>s;

    ll n = 0;
    if (s.length() == 1) {
        n = (s[0] - '0') % 4;
    } else {
        string lastTwo = s.substr(s.length() - 2);
        n = stoi(lastTwo) % 4;
    }

    if (n == 0) {
        n = 4;
    }

    ll ans = (power(1, n, 5) + power(2, n, 5) + power(3, n, 5) + power(4, n, 5)) % 5;
    
    cout << ans << "\n";

    return 0;
}