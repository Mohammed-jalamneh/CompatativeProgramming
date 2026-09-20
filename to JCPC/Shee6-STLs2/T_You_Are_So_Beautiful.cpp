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

void file_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

bool isSuffix(const string& a, const string& b) {
    if (a.length() > b.length()) return false;
    return b.substr(b.length() - a.length()) == a;
}


int main() {

    FastCode
    //file_io();


     int t; cin>>t;

     while(t--)
     {
     map<ll,ll> first , last;

        int n; cin>>n;
        vector<ll> v(n+1);
        
        for (int i = 1; i <=n; i++)
        {
            cin>>v[i];

            if(first.find(v[i]) == first.end())
            {
                first[v[i]] = i;
            }

            last[v[i]] =i;
        }

        ordered_set<ll> os;

        ll ans =0 ;
        for(auto it : first)
        {
            os.insert(it.second);
        }

        for(auto it: last)
        {
            ans+=os.order_of_key(it.second);
        }


        for(auto it: first)
        {
            if(it.second == last[it.first])
            ans++;
        }

        cout<<ans<<"\n";

     }





    

    return 0;
}