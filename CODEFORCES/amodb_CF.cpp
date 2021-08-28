// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||
void solve(ll l, ll r )
{
    ll k = r/2;
    if (k>=l)
    {
        cout << max(r%(k+1),r%k) << "\n";
        return;
    }

    else
    {
        cout << (r%l) << "\n";
    }
    
    return;

}

int main()


{
    flash

    ll n; cin >> n;
    forloop_n
    {

        ll l,r; cin >> l >> r;
        solve(l,r);
    }
    

    return 0;
}