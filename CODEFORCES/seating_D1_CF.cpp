// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||
#define vi vector<ll>
#define pb(n) push_back(n)
#define testcases ll t; cin >> t; while(t--)

void solve(ll n, ll arr[])
{
    ll count = 0;
    forloop_n
    {
        for (ll j = i-1; j>-1; j--)
        {
            if (arr[i]>arr[j])
            {
                count++;
            }
        }
    }


    cout << count << "\n";
}

int main()


{
    flash
    testcases
    {
        ll m; cin >> m;
        ll n; cin >> n;
        ll arr[n];
        forloop_n

        {
            cin >> arr[i];
        }
        solve(n,arr);
    }
    
    return 0;
}