#include <bits/stdc++.h>
using namespace std;

#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 

vector<bool> IsPrime(100005 , true);

void Sieve()
{
    IsPrime[0]=IsPrime[1]= false;

    for (int i = 2; i*i <IsPrime.size(); i++)
    {
        if(IsPrime[i])
        {
            for(int j= i+i ; j<IsPrime.size() ; j+=i )
            {
                IsPrime[j] = false;
            }
        }
    }
    
}


int main() {
    FastCode;


    int n,m; cin>>n>>m;

    Sieve();
    ll arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int smallestm=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int ctr=0;
        for (int j = 0; j < m; j++)
        {
            if(!IsPrime[arr[i][j]])
            {
                ctr++;
                int checkNumber = arr[i][j]+1;

                while(!IsPrime[checkNumber])
                {
                    checkNumber++;
                    ctr++;
                }
            }

          if(j == m-1)
          {
                smallestm = min(smallestm , ctr);
          }
        
        }
        
    }

    int smallestn =INT_MAX;

      for (int i = 0; i < m; i++)
    {
        int ctr=0;
        for (int j = 0; j < n; j++)
        {
            if(!IsPrime[arr[j][i]])
            {
                ctr++;
                int checkNumber = arr[j][i]+1;

                while(!IsPrime[checkNumber])
                {
                    checkNumber++;
                    ctr++;
                }
            }

          if(j == n-1)
          {
                smallestn = min(smallestn , ctr);
          }
        
        }
        
    }
 
    cout<<min(smallestm , smallestn);

    return 0;
}