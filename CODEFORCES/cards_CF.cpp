// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve (ll w, ll h, ll n)
{
    ll cardsbyW = 0;
    ll cardsbyH = 0;
    

    while (w%2==0)
    {
        cardsbyW++;
        w/=2;
    }

    while (h%2==0)
    {
        cardsbyH++;
        h/=2;
    }

    if (pow(2,cardsbyW)*pow(2,cardsbyH) >=n)
    {
        cout << "YES" << "\n";
        
    }

    else
    {
        cout << "NO" << "\n";
        
    }

    // debug
    // cout << cardsbyH << " " << cardsbyW << endl;
    return;

    

}

int main()


{
    flash
    ll t; cin >> t;
    while ((t--))
    {
        ll w,h,n; cin >> w >> h >> n;
        solve(w,h,n);
    }
    
    return 0;
}