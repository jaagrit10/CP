// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

// void brutesolve(ll n, ll* arr)
// {
//     ll ans = 0;
//     for (ll i = 0; i<n; i++)
//     {
//        for (ll j = i+1; j<n; j++)
//        {
//            if (arr[i]*arr[j] == i+j+2)
//            {
//                ans++;
//            }
//        }
//     }
//     cout << ans << "\n";
//     return;
// }

ll solve(ll n, ll* arr)
{
    ll res = 0;
    for (ll i = 1; i<n+1; i++)
    {
        // cout << arr[i] << endl;
        for (ll j = arr[i]-i; j<n+1 ;j=j+arr[i])
        {
            // cout << arr[i] << " " << arr[j-i] << " " << j << endl; //debug
            if (j>0 And arr[i]*arr[j]==i+j And i<j)
            {
                res++;
            }

        }
    }
    cout << res << "\n";
}

int main()


{
    flash
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll* arr = new ll[n+1];
        arr[0] = 0;
        for (ll i = 1; i<n+1; i++)
        {
            cin >> arr[i];
        }
        // for (ll i = 1; i<n+1; i++)
        // {
        //     cout << arr[i] <<" ";
        // }
        // cout << endl;
        solve(n,arr);
    }
    return 0;
}