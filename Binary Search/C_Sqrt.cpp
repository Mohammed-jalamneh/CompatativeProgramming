#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll n;

bool can(long double mid )
{
    return mid*mid >=n;
}


int main() {
    FastCode

     cin>>n;


    long double L =1  , R = 1e9 , mid , ans;
        
    while(R-L >= 1e-8)
    {
        mid = L+(R-L)/2;

        if(can(mid))
        {
            R = mid;
        }else
        {
            L =mid;
        }

    }

    cout<<fixed<<setprecision(7)<<R<<"\n";

    return 0;
}