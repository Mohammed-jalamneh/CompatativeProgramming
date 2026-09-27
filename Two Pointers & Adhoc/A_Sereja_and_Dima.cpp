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


bool isOdd(int n) {
    return (n %2) != 0;
}


int main() {

    FastCode
    //file_io();

    int n; cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int l =0 ,r =n-1;
    int s =0 , d = 0;


   for(int i=1;i<=n;i++)
    {
        if(isOdd(i))
        {
            if(v[l] > v[r])
            {
                s+=v[l];
                l++;

            }else
            {
                s+=v[r];
                r--;
            }
        }
        else
        {
            if(v[l] > v[r])
            {
                d+=v[l];
                l++;
            }else
            {
                d+=v[r];
                r--;
            }
        }
        
    }

    cout<<s<<" "<<d<<"\n";

    return 0;
}