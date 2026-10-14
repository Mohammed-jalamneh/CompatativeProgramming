#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    FastCode

    int n, q; 
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin() , v.end());

    cin>>q;

    while(q--)
    {
        int target ; cin>>target;
        auto it = upper_bound(v.begin() , v.end() , target );

            cout<<it-v.begin()<<"\n";
        
    }

    return 0;
}