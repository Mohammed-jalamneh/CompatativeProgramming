#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MAX_P = 1000000; 
vector<bool> is_prime(MAX_P + 1, true);

void build_sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_P; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_P; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    FastCode;

    build_sieve();

    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        ll x;
        cin >> x;

        ll root = round(sqrt(x));

        if (root * root == x && is_prime[root]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}