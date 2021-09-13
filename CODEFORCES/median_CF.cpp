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

void solve(ll n,ll s)
{

    // if (n>s)
    // {
    //     cout << 0 << "\n"; 
    //     return;
    // }
    ll mediann = n/2;

    ll lo = 0;
    ll hi = 10000000000;
    ll mid = 0;
    ll ans = 0;
    if (n%2!=0)
    {
        while(lo<=hi)
        {
        mid = lo + (hi-lo)/2;
        if (mid*(n-mediann)<=s)
        {
            ans = mid;
            lo = mid+1;
        }

        else
        {
            hi = mid-1;
        }

        }

    }

    else
    {
        while(lo<=hi)
        {
        mid = lo + (hi-lo)/2;
        if (mid*(n-mediann+1)<=s)
        {
            ans = mid;
            lo = mid+1;
        }

        else
        {
            hi = mid-1;
        }

        }
    }
    

    cout << ans << "\n";
    return;
}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll n,s; cin >> n >> s;
        solve(n,s);

        
    }
    
    return 0;
}