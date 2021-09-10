// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, string s)
{
    ll aas = 0; 
    ll bees = 0;
    for (ll i =0; i<n; i++)
    {
        aas = 0;
        bees = 0;
        for (ll j = i; j<n; j++)
        {
            
            if (s[j]=='a')
            {
                aas++;
            }

            else
            {
                bees++;
            }

            if (aas==bees)
            {
                cout << i+1 << " " << j+1 << "\n";
                return;
            }
        }
        
    }

    cout << "-1" << " " << "-1" << "\n";
    return;
}

int main()


{
    flash

    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        string s; cin >> s;
        solve(n,s);
    }
    return 0;
}