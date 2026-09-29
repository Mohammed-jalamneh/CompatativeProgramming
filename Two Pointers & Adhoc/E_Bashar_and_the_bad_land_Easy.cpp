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

  int n , x; cin>>n>>x;

    vector<ll> v(n);

    for(int i=0 ; i<n ; i++) cin>>v[i];

    int L=0,R=0;
    ll gold =0;
    int minLen =1e6;

    while(R<n)
    {
         gold += v[R]; 
      
            while(gold >= x)
            {
                if(gold-v[L] < x)
                break;

                gold-=v[L];
                L++;
                
            }

            if(gold >= x) minLen =min(minLen , R-L+1);
        

        R++;
    }
    
    
    if(minLen == 1e6)
    cout<<-1<<"\n";
    else
    {
        cout<<minLen<<"\n";
    }

    return 0;
}