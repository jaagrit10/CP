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

void solve(ll n, ll k, string s)
{
    ll count = 0;
    for (ll i = 0; i<n/2; i++)
    {
        // cout << s[i] << " " << s[n-i-1] << endl;
        if (s[i]!=s[n-i-1])
        {
            count++;
        }
    }

    // cout << count << endl;


    

    if (k>=count)
    {
        cout << k-count << "\n";
        return;
    }


    else
    {
        cout << count - k << "\n";
        return;
    }


}

int main()


{
    flash
    ll t; cin >> t; while(t--)
    {
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        solve(n,k,s);
    }
    return 0;
}