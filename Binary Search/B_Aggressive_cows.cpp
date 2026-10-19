#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define FastCode ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool can(ll mid, const vector<int> &v, int c)
{
    int placed_cows = 1;
    int last_pos = v[0]; 
    for (int i = 1; i < (int)v.size(); i++)
    {
        if (v[i] - last_pos >= mid)
        {
            placed_cows++;
            last_pos = v[i];
        }
    }

    return placed_cows >= c;
}

int main() {
    FastCode

    int n, c; 
    if (!(cin >> n >> c)) return 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    ll l = 1, r = v.back() - v.front(), ans = 1;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (can(mid, v, c))
        {
            ans = mid;    
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
    
    return 0;
}