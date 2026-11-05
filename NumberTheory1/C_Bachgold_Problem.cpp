#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<bool> is_prime(1e6, true);
vector<int> Primes;

bool Prime(int n)
{
    if(n<=1) return false;
    if(n == 2) return true;
    if(n%2 ==0) return false;

    for (int i = 3; i < n; i=+2)
    {
        if(n%i == 0)  return false;  
    }

    return true;
}


void Sieve(int n) {
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            Primes.push_back(p);
        }
    }
}


int main() {
    FastCode


    int n ;cin>>n;
    Sieve(n);
    ll size = Primes.size();

    cout<<size-1<<"\n";
    
    ll count =0;
    for (size_t i = 0; i < size; i++)
    {
        count+=Primes[i];
        if(count>5)
        break;

        cout<<Primes[i]<<" ";      
    }



    
    return 0;
}