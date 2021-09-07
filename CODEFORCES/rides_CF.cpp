// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll m, ll a, ll b)
{
    if ((float)b/m<=(float)a)
    {
        cout << min((n/m)*b + (n-(m*(n/m)))*a,(n/m)*b+b ) << endl;
        return;

    }

    else
    {
        cout << a*n << "\n";
        return;
    }
}

int main()


{
    ll n,m,a,b; cin >> n >> m >> a >> b;
    solve(n, m, a, b);
    flash
    return 0;
}