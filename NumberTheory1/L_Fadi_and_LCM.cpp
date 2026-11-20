#include <bits/stdc++.h>
using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 

int main() {
    FastCode;

    ll x; 
    cin >> x;

    // to solve this problem we rely on two things  a*b = x
    //gcd of a,d = 1
    //just because lcm(a,b) = a*b / gcd(a,b)

    //btw lcm(a,b) = x

    ll best_a = 1, best_b = x; 

    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0) { 
            ll l = x / i; 
            
            if (std::gcd(i, l) == 1) {
                best_a = i;
                best_b = l;
        }
    }
    }

    cout << best_a << " " << best_b << "\n";

    return 0;
}