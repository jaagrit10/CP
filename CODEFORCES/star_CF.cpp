// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||
#define vi vector<ll>
// #define pb(n) push_back(n)

bool pointconfirm(ll x1, ll y1, ll x2, ll y2, ll x, ll y)
{
    if (x>=x1 And x<=x2 And y>=y1 And y<=y2)
    {
        return true;
    }
    return false;
}

void solve(ll n, ll q, ll c)
{
    ll arr[n][3];
    forloop_n
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    }

    while (q--)
    {
        ll t,x1,y1,x2,y2; cin >> t >> x1 >> y1 >> x2 >> y2;
        ll ans = 0;
        forloop_n
        {
            ll x = arr[i][0];
            ll y = arr[i][1];
            ll z = arr[i][2];
            if (pointconfirm(x1,y1,x2,y2,x,y))
            {
                // cout << x << " " << y << " " << (z+t) << endl;
                
                ans += (z+ (t)%(c+1))%(c+1);

            }
        }
        // cout << "----------------" << endl;
        cout << ans << "\n";
        // cout << "----------------" << endl;
    }

}

int main()


{
    flash
    ll n,q,c; cin >> n >> q >> c;
    solve(n,q,c);
    return 0;
}