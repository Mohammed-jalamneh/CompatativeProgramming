#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);




int main() {
    FastCode

    int n , a , b , p , q; cin>>n>>a>>b>>p>>q;

    
    ll count_a = n / a;
    ll count_b = n / b;
    ll count_common = n / std::lcm((ll)a, b);

    cout<<(count_a - count_common) *p+ (count_b - count_common)*q + (count_common *max(p,q));


    
    return 0;
}