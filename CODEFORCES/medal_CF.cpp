// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll maxelement(ll n, ll arr[])
{
    ll max_ = INT32_MIN;
    for (ll i=0; i< n; i++)
    {
        max_ = max(arr[i],max_);
    }

    return max_;

}

ll minelement(ll n, ll arr[])
{
    ll min_ = INT32_MAX;
    for (ll i=0; i<n; i++)
    {
        min_ = min(arr[i],min_);
    }

    return min_;

}


void solve(ll n, ll m, ll z, ll r1[], ll p1[], ll p2[], ll a, ll b)
{
    // cout << "hgello" <<endl;
    ll outerradius = maxelement(n,r1);
    ll innerdensity = minelement(z,p2);
    ll outerdensity = maxelement(m,p1);
    float num1 = (float)outerradius*outerradius;
    float num2 = (float)a/b;
    float denom1 = ((float)innerdensity/outerdensity) * num2;
    float denom2 = (float)denom1 + 1;
    float num = (float)num1;
    float ans = (float)num/denom2;
    // ans = (b/a)*((outerradius*outerradius)/(innerdensity/outerdensity)+1);
    // cout << num1 << " " << num2 << " " << denom1 << " " << denom2  << " " << num << " " << ans << " " << outerdensity  << " " << innerdensity <<   endl;
    cout << fixed << setprecision(9) << sqrt(ans);
    return;


}

int main()


{
    flash
    ll n, m, z, a, b;
    cin >> n;
    ll r1[n];
    forloop_n
    {
        cin >> r1[i];
    }
    cin >> m;
    ll p1[m]; 
    for (ll i=0; i<m; i++)
    {
        cin >> p1[i];
    }

    cin >> z;
    ll p2[z];
    for (ll i=0; i<z; i++)
    {
        cin >> p2[i];
    }
    cin >> a >> b; 
    solve(n,m,z,r1,p1,p2,a,b);
    // cout << minelement(z,p2);

    return 0;
}