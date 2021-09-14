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

void solve(ll arr[])
{
    
    vi v;
    v[0] = 0;
    for (ll i = 1; i<5; i++)
    {
        v[i] = i;


    }

    cout << v[2] << endl;
    for(ll i = 1; i<5; i++)
    {
        if (v[arr[i]]==0)
        {
            cout << arr[i] << endl;
            return;
        }

        else
        {
            v[arr[i]] = 0;
        }


    }

    // cout << xorx << endl;



}

int main()


{
    flash
    ll arr[5] = {1,3,4,2,2};
    vi v;
    v[0] = 0;
    for (ll i = 1; i<5; i++)
    {
        v.push_back(i);


    }

    cout << v[2] << endl;
    for(ll i = 1; i<5; i++)
    {
        if (v[arr[i]]==0)
        {
            cout << arr[i] << endl;
            break;
        }

        else
        {
            v[arr[i]] = 0;
        }


    }
    // solve(arr);
    return 0;
}