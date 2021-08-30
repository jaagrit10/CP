// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll arr[])
{
    ll temp = 0;
    ll count = 0;
    for(ll i = 0; i<n-1; i++)
    {
        temp = min(arr[i],arr[i+1]);
        while (temp*2 <max(arr[i],arr[i+1]))
        {
            count++;
            temp*=2;

        }

    }


    cout << count << "\n";
}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
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