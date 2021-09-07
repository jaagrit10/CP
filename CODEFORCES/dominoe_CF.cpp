// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, string r)
{
    forloop_n
    {
        if (r[i]=='L' Or r[i]=='R')
        {
            cout << r[i];
        }

        else if (r[i]=='U')
        {
            cout << "D";
        }

        else
        {
            cout << "U";
        }


    }
    cout << "\n";
}

int main()


{
    flash
    ll t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n ;
        string r; cin >> r;
        solve(n,r);
    }
    return 0;
}