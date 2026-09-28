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


int main() {

    FastCode

    int n , m; cin>>n>>m;

    vector<ll> v(n);

    for(int i=0 ; i<n ; i++) cin>>v[i];

  int l = 0, r = 0;
    ll sum = 0;
    int minLen = n + 1; 

    while (r < n) {
        sum += v[r];

        while (sum >= m) {
            minLen = min(minLen, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }

   if (minLen > n) {
        cout << -1 << "\n";
    } else {
        cout << minLen << "\n";
    }

    return 0;
}