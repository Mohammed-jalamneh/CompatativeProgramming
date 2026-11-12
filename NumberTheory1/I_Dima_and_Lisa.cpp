#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 

bool isPrime(int n)
{
    if(n ==1) return false;
    if(n ==2 ) return true;
    if(n%2 == 0 ) return false;

    for (int i = 3; i*i <= n; i+=2)
    {
        if(n %i == 0) return false;
    }

    return true;

}

int main() {
    FastCode;

    int n; cin>>n;

  

    if(isPrime(n)) 
    {
        cout<<1<<"\n";
        cout<<n;
        return 0;
    }
    
    if(isPrime(n-2)) 
    {
        cout<<2<<"\n";
        cout<<2<<" "<<n-2;
        return 0;
    }


       for (int i = 2; i < n-3 ; i++)
       {
            if(isPrime(i) && isPrime(n-3-i))
            {
                cout<<3<<"\n";
                cout<<3<<" "<<i<<" "<<n-3-i<<"\n";
                break;
            }
                
       }
       

    
    return 0;
}