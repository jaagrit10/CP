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
#define test_cases_loop ll t; cin >> t; while(t--)

void solve(ll n ,ll m, ll k, ll arr[])
{
    for(ll i = n-1; i>=k; i--)
    {
        for ( ll j = 0; j<k-1; j++)
        {
            if (arr[i][j]=="*")
            {
                
            }
        }

    }
}


int main()


{
    flash
    test_cases_loop
    {
        ll n,m,k; cin >> n >> m >> k;
        char arr[n][m];
        forloop_n
        {
        for (ll j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
        }

        

    }

    return 0;
}