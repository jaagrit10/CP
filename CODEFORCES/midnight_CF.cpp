// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll sum(ll x, ll k)
{
    ll sum = 0;
    while (x>0)
    {
        sum+=x;
        x=x/k;

    }

    return sum;
}

void solve(ll n, ll k)
{
    ll lo = 1;
    ll hi = 1000000000;
    ll mid = lo +(hi-lo)/2;
    ll ans = 0;

    while (lo<=hi)
    {
        mid = lo + (hi-lo)/2;

        if (sum(mid,k)>=n)
        {
            ans = mid;
            hi = mid-1;
        }

        else
        {
            lo = mid+1;
        }


    }


    cout << ans;



}

int main()


{
    flash
    ll n, k; cin >> n >> k;
    solve(n,k);
    return 0;
}