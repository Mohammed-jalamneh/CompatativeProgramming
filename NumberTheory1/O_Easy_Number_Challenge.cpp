#include <bits/stdc++.h>
using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 

ll Size = 1000005;

vector <ll> d(Size,0);

void Sieve()
{
    for (int i = 1; i <Size; i++)
    {
            for (int j = i; j <Size; j+=i)
            {
                d[j]++;
            }
    }
}


int main() {
    FastCode;

    int a,b,c; cin>>a>>b>>c;
    ll ans =0;
    Sieve();

    for (int i = 1; i <=a; i++)
    {
        for(int j =1 ; j<=b ; j++)
        {
            for(int k=1 ; k<=c  ; k++)
            {
                ans+=d[i*j*k] %1073741824 ;   
            }

        }
        
    }

    cout<<ans<<"\n";
    

    return 0;
}