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
   // file_io();

    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> freq(n + 2, 0);
    int current_len = 1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] <= a[i + 1]) {
            current_len++;
        } else {
            freq[current_len]++;
            current_len = 1;
        }
    }
    freq[current_len]++;

    
    vector<ll> count_ge(n + 2, 0);
    for (int len = n; len >= 1; len--) {
        count_ge[len] = count_ge[len + 1] + freq[len];
    }

 
    vector<ll> ans(n + 2, 0);
    for (int len = n; len >= 1; len--) {
        ans[len] = ans[len + 1] + count_ge[len];
    }

   
    for (int len = 1; len <= k; len++) {
        cout << ans[len] << (len == k ? "" : " ");
    }
    cout << "\n";


    return 0;
}