// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll k)
{
    long double knew = sqrt(k);
    ll floorx = floor(knew);
    ll ceilx = ceil(knew);
    // cout << knew << " " <<  floor(knew) << " " << ceil(knew) << endl; //debug 
    
    if (floor(knew)==ceil(knew))
    {
        cout << knew << " " << 1 << "\n";
        return;
    }

    else
    {
        if (k-floorx*floorx<=ceilx)
        {
            cout << k-floorx*floorx  << " " << floorx + 1 << "\n";
            return;
        }

        else
        {
            cout << ceilx << " " << 1 + (ceilx*ceilx - k) << "\n";
            return;
        }
    }
}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll k; cin >> k;
        solve(k);
    }
    return 0;
}