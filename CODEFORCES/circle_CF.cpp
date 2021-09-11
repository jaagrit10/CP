// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll a, ll b, ll c)
{
    if (abs(a-b)>=min(a,b) And abs(a-b)<=max(a,b) And a!=b And c<=2*(abs(a-b)))
    {
        if ((c + abs(a-b))%(2*abs(a-b))!=0)
        cout << (c + abs(a-b))%(2*abs(a-b)) << "\n";
        else
        {
            cout << 2*(abs(a-b)) << "\n";
        }
        return;

    }


    else

    {
        cout << -1 << "\n";
        return;
    }


}

int main()


{
    flash
    ll t; cin >> t;
    while(t--)
    {
        ll a, b, c; cin >> a >> b >> c;
        solve(a,b,c);

    }
    return 0;
}