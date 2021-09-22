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

void solve(ll n, ll arr[], ll m)
{
    sort(arr,arr+n);
    ll sum = 0;

    forloop_n
    {
        sum+=arr[i];
    }
    while(m--)
    {
        ll xi,yi; cin >> xi >> yi;

        ll lo = 0;
        ll ans = arr[n-1];
        ll hi = n-1;
        ll mid = 0;

        while (lo<=hi)
        {
            mid = lo + (hi-lo)/2;

            if (arr[mid]>=xi)
            {
                ans = arr[mid];
                hi = mid-1;
            }
            else
            {
                lo = mid+1;
            }
        }

        lo = 0;
        ll ans2 = arr[0];
        hi = n-1;
        mid = 0;

        while (lo<=hi)
        {
            mid = lo + (hi-lo)/2;

            if (arr[mid]<=xi)
            {
                ans2 = arr[mid];
                lo = mid+1;
            }
            else
            {
                hi = mid-1;
            }
        }

        ll coins2  = 0;
        if (xi-ans2>0)
        {
            coins2+=xi-ans2;
        }

        if (sum-ans2<yi)
        {
            coins2+=(yi-sum+ans2);
        }

        


        // cout << ans << "-----------" << endl;


        ll coins = 0;
        if (xi-ans>0)
        {
            coins+=xi-ans;
        }

        if (sum-ans<yi)
        {
            coins+=(yi-sum+ans);
        }

        cout << min(coins,coins2) << "\n";




        
    }

}


int main()


{
    flash
    ll n; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    ll m; cin >> m;
    solve(n,arr,m);
    return 0;
}