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
    ll sum = 0;
    ll two = 0;
    ll one = 0;
    forloop_n
    {
        sum+=arr[i];
        if (arr[i]==2)
        {
            two++;
        }
        else
        {
            one++;
        }

    }

    if (one==0 and two%2!=0)
    {
        cout << "NO" << "\n";
        return;
    }
    if (sum%2==0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
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