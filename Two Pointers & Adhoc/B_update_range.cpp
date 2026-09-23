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

    ll n , q; cin>>n>>q;

    vector<ll> v(n+2);

    vector<ll> vals(n+2 ,0);

    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }

    while(q--)
    {
        ll l , r , val;
        cin>>l>>r>>val;

        vals[l] +=val;
        vals[r+1] -=val;
    }

    for (int i = 1; i <= n; i++)
    {
        vals[i] +=vals[i-1];
    }

    for (int i = 1; i <= n; i++)
    {
       v[i] +=vals[i];
    }

     for (int i = 1; i <= n; i++)
    {
      cout<<v[i]<<" ";
    }
  
    return 0;
}