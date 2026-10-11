#include <bits/stdc++.h>
#include <cmath>
#include <functional>

using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {

    FastCode;

    int n;
    long long t;
    if (!(cin >> n >> t)) return 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int l = 0;
    long long current_sum = 0;
    int max_books = 0;

    for (int r = 0; r < n; r++) {
        current_sum += v[r];

        while (current_sum > t) {
            current_sum -= v[l];
            l++;
        }

        max_books = max(max_books, r - l + 1);
    }

    cout << max_books << "\n";


    return 0;
}