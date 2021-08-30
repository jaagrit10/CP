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
    ll curr = 0;
    ll ans = 0;
    ll finalans = 0;
    ll temp = 0;
    

    forloop_n
    {
        // cout << "hello";
        curr = 0;
        ans = 0;
        temp = 0;
        if (arr[i]!=0)
        {
            curr = i;
            // cout << i << endl;
            while (curr<n And arr[curr]!=0)
            {
                
                ans+=arr[curr];
                temp = arr[curr];
                arr[curr] = 0;
                curr = curr + temp;
                // cout << curr << endl;
            }
        }


        finalans = max(finalans,ans);


    }


    cout << finalans << endl;
}

int main()


{
    flash
    ll t; cin >> t; 
    while (t--)
    {
        // cout << "hello";
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