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

    string s; cin>>s;
    int q; cin>>q;

    vector<ll> v(s.length()+5 , 0);

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a')
        v[i+1]++;
    }

    for (int i = 1; i <= s.length(); i++)
    {
        v[i]+=v[i-1];
    }

    while(q--)
    {
        int l , r; cin>>l>>r;
        cout<<v[r]-v[l-1]<<"\n";
    }
   
  
    return 0;
}