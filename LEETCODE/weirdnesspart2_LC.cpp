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

void solve(ll n, ll arr[])
{
    vi check;
    check.pb(0);
    for (ll i = 1; i<n; i++)
    {
        check.pb(i);
        

    }
    // forloop_n
    // {
    //     cout << check[i] << " ";
    // }
    // cout << "\n";

    forloop_n
    {
        if (check[arr[i]]==0)
        {
            cout << arr[i] << endl;
            return;
        }

        else
        {
            check[arr[i]] = 0;
        }
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
    solve(n,arr);
    return 0;
}