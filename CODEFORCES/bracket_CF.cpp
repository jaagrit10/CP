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
#define test_cases_loop ll t; cin >> t; while(t--)

void solve(ll n)
{
    for(ll i = n; i>0; i--)
    {
        ll j = 0;
        while(j<i)
        {
            cout << "(";
            j++;
        }
        j-=1;

        while (j>-1)
        {
            cout << ")";
            j--;
        }

        if (n-i>0)
        {
            ll j = 0;
            while(j<n-i)
        {
            cout << "(";
            j++;
        }
            j-=1;

            while (j>-1)
        {
            cout << ")";
            j--;
        }

        }

        cout << "\n";
    }
}

int main()


{
    flash
    test_cases_loop
    {
        ll n; cin >> n;
        solve(n);
    }
    return 0;
}