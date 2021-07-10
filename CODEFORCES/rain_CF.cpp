// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void rain(ll n , ll arr[])
{
    ll finalans = -1;
    vector<ll> ans;
    ll checker = 0;
    ll cont = 0;
    ll forw = 0;
    ll prev = 0;

    for (ll i=0; i<n; i++)
    {
        cont = 1;
        forw = arr[i];
        prev = arr[i];
        for (ll j=i+1; j<n; j++)
        {
            
            if (arr[j]<=forw)
            {
                cont+=1;
                forw = arr[j];
            }

            else
            {
                break;
            }
        }

        for (ll k=i-1; k>=0; k--)
        {
            
            if (arr[k]<=prev)
            {
                cont+=1;
                prev = arr[k];
            }

            else
            {
                break;
            }
        }

        // cout << cont << endl;


        if (finalans<=cont)
        {
            finalans = cont;
        }


    }

    // for (ll i=0; i<n; i++)
    // {
    //     cout << ans[i] << " "; 
    // }
    // cout << max_element(ans.begin(),ans.end());

    cout << finalans << endl;



}

int main()


{
    flash
    ll n ; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    rain(n,arr);
    return 0;
}