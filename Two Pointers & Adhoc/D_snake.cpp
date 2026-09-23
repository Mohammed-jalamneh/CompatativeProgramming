#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>


using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


void file_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


int main() {

    FastCode
   // file_io();

    
    int n , q; cin>>n>>q;

    vector<ll> v(n+5 , 0);

    for (int i = 1; i <= n; i++)
    {
       char c; cin>>c;
        if(c =='X') v[i]++;
    }

    for (int i = 1; i <= n; i++)
    {
        v[i]+=v[i-1];
    }

    while(q--)
    {
        int l , r; cin>>l>>r;
        if(l>r) swap(l,r);
        cout<<v[r]-v[l-1]<<"\n";
    }
   
  
    return 0;
}