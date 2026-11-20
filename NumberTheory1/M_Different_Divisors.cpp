#include <bits/stdc++.h>
using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 


bool IsPrime(int n)
{
    if(n <=1) return false;
    if(n==2) return true;
    if(n%2 == 0 ) return false;

    for (int i = 3; i*i <= n; i+=2)
    {
        if(n% i == 0 ) return false;
    }
    
    return true;
}


int main() {
    FastCode;

    int t; cin>>t;

    while(t--)
    {
        int d; cin>>d;

        int StartPoint =1;
        int n1 =StartPoint +d ;

        while(!IsPrime(n1))
        {
            n1++;
        }
        
        int n2 = n1+d;
        while(!IsPrime(n2))
        {
            n2++;
        }
    
        
        cout<<n1*n2<<"\n";
    }

    return 0;
}