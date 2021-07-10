// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll solve(ll n, ll k)
{
    ll lo = 1;
    ll hi = k;
    ll mid = 0;
    ll val = 0;
    while (lo<hi)
    {
        mid = lo + (hi-lo)/2;

        if (mid<=1)
        {
            val = k*(k+1)/2;
        }
        else
        {
            val = k*(k+1)/2 - mid*(mid+1)/2;
        }
        

        if (val==n)
        {
            return k-mid+1;
        }

        else if (val>n)
        {
            lo = mid + 1;
        }

        else
        {
            hi = mid ;
        }
    }


    return k-lo+1;
    
}

int main()


{
    flash
    ll n, k; cin >> n >> k;

    if (n==1)
    {
        cout << 0;
    }

    else if (n<=k)
    {
        cout << 1;
    }

    else
    {

    

        if ((k-1)*(k)/2 < n -1 )
        {
            cout << -1;
        }
        else
        {
            cout << solve(n,k);
        }
    }
    return 0;
}