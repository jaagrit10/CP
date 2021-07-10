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
    ll energy = 0;
    ll dollar = arr[0];
    for (ll i=0; i<n-1; i++)
    {
        if (arr[i]>=arr[i+1])
        {
            energy+=(arr[i]-arr[i+1]);
        }

        else
        {
            if (energy<=arr[i+1]-arr[i])
            {
                dollar+=(arr[i+1]-arr[i]-energy);
                energy = 0;
            }

            else
            {
                energy-=arr[i+1]-arr[i];

            }
        }



    }

    cout << dollar;
    return;
}

int main()


{
    flash
    ll n; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >>arr[i];
    }

    solve(n,arr);
    return 0;
}