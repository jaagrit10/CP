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

void solve(ll n, string s)
{
    // ll i = 0; 
    ll sum = 0;
    ll continuouszero = 0;
    forloop_n
    {
        if (sum>2)
        {
            cout << 2 << "\n";
            return;
        }

        if (s[i]=='0')
        {
            continuouszero+=1;
            // i+=1;
        }

        else if (s[i]=='1' And continuouszero>0)
        {
            sum+=1;
            continuouszero = 0;
            // i+=1;
        }
        if (i==n-1 And continuouszero>0)
        {
            sum+=1;
        }

        if (sum>2)
        {
            cout << 2 << "\n";
            return;
        }

        


    }

    cout << sum << "\n";
    return;
}

int main()


{
    flash
    ll t; cin >> t;
    while(t--)
    {
        // ll n; cin >> n;
        string s; cin >> s;
        ll n = s.length();
        solve(n,s);
    }
    return 0;
}