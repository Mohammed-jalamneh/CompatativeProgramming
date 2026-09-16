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
    greater<T>, 
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
    cin >> n;

    map<ll, int> ms;
    ll c=0;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        ms[x]++;

    
    }

    for (auto it = ms.begin(); it != ms.end(); it++) {
        if(it->second == 1) {
          c++;
        }
    }

    cout<<c<<endl;
    return 0;
}