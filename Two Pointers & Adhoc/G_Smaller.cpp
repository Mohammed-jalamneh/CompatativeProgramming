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

    ll n,m; cin>>n>>m;

    vector<ll> v1(n);
    vector<ll> v2(m);
    vector<ll> freq(m+1 , 0);

    for(ll i=0 ;i<n; i++) cin>>v1[i];
    for(ll i=0 ;i<m; i++) cin>>v2[i];
    

    ll r1 =0 ;
    
    for(ll r2=0 , i =1  ; r2<m ; r2++ , i++)
    {
        while (r1 < n && v1[r1] < v2[r2])
      {
        freq[i]++;
        r1++;
     }
        
    }

    for(ll j=1 ;j<=m ; j++)
    freq[j]+=freq[j-1];
    
    for(ll k=1 ;k<=m ; k++)
    cout<<freq[k]<<" ";
  
    
    return 0;
}