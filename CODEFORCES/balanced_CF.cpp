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
    ll c0 = 0;
    ll c1 = 0;
    ll c2 = 0;
    forloop_n
    {
        if (arr[i]%3==0) c0++;
        else if (arr[i]%3==1) c1++;
        else c2++;
    }

    ll distri = n/3;
    ll count = 0;

    while (c0!=distri Or c1!=distri Or c2!=distri)
    {
        if (c0>distri)
        {
            count = count + c0-distri;
            c1 = c1 + c0 - distri;
            c0 = distri;
            

        }

        else if (c1>distri)
        {
            count = count + c1 - distri;
            c2 = c2 + c1-distri;
            c1 = distri;
        }


        else if (c2 > distri)
        {
            count += c2 - distri;
            c0 = c0 + c2 - distri;
            c2 = distri;

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