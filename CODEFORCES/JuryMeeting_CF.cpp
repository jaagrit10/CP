// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, vector<ll> factorial, ll arr[], ll mod)
{
    sort(arr,arr+n);

    ll secondlargestcount = 0;
    if (arr[n-1]==arr[n-2])
    {
        cout << factorial[n] << "\n";
        return;
    }

    else if (arr[n-1]-arr[n-2]>1)
    {
        cout << 0 << "\n";
        return;
    }

    else
    {
        forloop_n
        {
            if (arr[i]==arr[n-2])
            {
                secondlargestcount++;
            }

            cout << (factorial[n]%mod - (factorial[n]*factorial[n-secondlargestcount-1]/factorial[n-secondlargestcount])%mod)%mod << "\n"; 
            return;
        }



    }
}


int main()


{
    flash
    vector<ll> factorial;
    factorial[0] = 1;
    // precalc
    ll temp = 1;
    ll mod = 998244353;
    
    for (ll i = 1; i<2*100000 + 1; i++)
    {
        factorial.push_back(temp);
        temp = temp*(i+1)%mod;

    }

    ll t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n;
        ll arr[n];
        forloop_n
        {
            cin >> arr[i];
        }

        solve(n,factorial,arr,mod);


    }
    return 0;
}