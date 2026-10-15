#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    FastCode

    int c; cin>>c;
    ll time; cin>>time;

    long double l =1 , r =2e10 , mid , ans;

    while(r - l >= 1e-8)
    {
        mid = l+(r-l) / 2;

        if(c*mid*log2(mid) >= time)
        {
            r= mid;
        }else
        {
            l=mid;
        }

    }

    cout<<fixed<<setprecision(6)<<r;
    
    return 0;
}