#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


vector<bool> is_prime(1e6 + 5, true);
vector<int> primes;

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
            primes.push_back(p);
        }
    }
}

int main() {
    FastCode

    int n , k; cin>>n>>k;

    Sieve(n);

    if(primes.size() < k ) 
    {
        cout<<"NO";
        return 0;
    }

    
    int ctr=0;

    for(int i =0 ; i+1 < primes.size() ; i++)
    {
        int sum = primes[i] + primes[i+1]+1;
        if (sum <= n && is_prime[sum]) ctr++;
        
    }

    if(ctr >= k) cout<<"YES";
    else cout<<"NO"; 


    
    return 0;
}