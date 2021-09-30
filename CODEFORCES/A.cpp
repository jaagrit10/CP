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

void solve(string s)
{
    ll a = 0;
    ll b = 0; 
    ll c = 0;

    for (ll i = 0; i<s.length(); i++)
    {
        if (s[i]=='A')
        {
            a++;
        }
        else if (s[i]=='B')
        {
            b++;
        }

        else
        {
            c++;
        }
    }

    if (a+c == b)
    {
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
    return;
}

int main()


{
    flash
    test_cases_loop
    {
        string s; cin >> s;
        solve(s);
    }
    return 0;
}