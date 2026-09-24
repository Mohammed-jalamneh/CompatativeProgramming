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

    string s; cin>>s;

    int n = s.length();
    vector<ll> pref(n+5,0);
    
    for(int i =0 ; i<n ; i++)
    {
        if( i != n-1)
        {
            if(s[i] =='1' && s[i+1] =='3')
            {
                pref[i+1]++;
            }
        }
        
        
    }

    for(int i =1 ; i<=n ; i++)
    {
    
        pref[i]+=pref[i-1];
    }


    int q; cin>>q;

    while(q--)
    {
        int l , r; cin>>l>>r;
        
        if(l>r) swap(l,r);
        cout<<pref[r-1]-pref[l-1]<<"\n";
    }

    return 0;
}