#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>


using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


template <typename T>
using ordered_set = tree<
    T, 
    null_type, 
    less<T>, 
    rb_tree_tag, 
    tree_order_statistics_node_update
>;

template <typename T>
using ordered_set1 = tree<
    T, 
    null_type, 
    less<T>, 
    rb_tree_tag, 
    tree_order_statistics_node_update
>;

void file_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}




int main() {

    FastCode
    //file_io();

    int n;
    if (!(cin >> n)) return 0;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> L(n);
    ordered_set<ll> left_os;

    for (int j = 0; j < n; j++) {
        ll smaller = left_os.order_of_key(a[j]);
        L[j] = j - smaller;
        left_os.insert(a[j]);
    }

    vector<ll> R(n);
    ordered_set<ll> right_os;

    for (int j = n - 1; j >= 0; j--) {
        R[j] = right_os.order_of_key(a[j]);
        right_os.insert(a[j]);
    }

    ll ans = 0;
    for (int j = 0; j < n; j++) {
        ans += L[j] * R[j];
    }

    cout << ans << "\n";

    return 0;
}