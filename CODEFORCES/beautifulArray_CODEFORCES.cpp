// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n)
{
    ll lo = 0;
    ll hi = 10000;
    ll mid = 0;
    ll ans = 0;
    while (lo<=hi)
    {
        mid = lo +(hi-lo)/2;
        // cout << mid <<  " "  << hi << " " << lo<<  endl;
        if (n<=mid*mid)
        {
            ans = mid;
            hi  = mid-1;

        }

        else
        {
            lo = mid+1;
        }
    }


    cout << ans << "\n";

}

int main()


{
    flash

    ll t; cin >> t;
    for (ll i = 0; i<t; i++)
    {
        ll n; cin >> n;
        solve(n);
    }
    return 0;
}