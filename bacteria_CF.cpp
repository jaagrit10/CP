// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll power_2(ll n)
{
    if (n==1)
    {
        return 1;
    }
    ll power = 0;
    while (n>=2)
    {
        power++;
        // cout  << n << " " << power << endl;
        n=n/2;
    }

    return power;
}

ll expo(ll n )
{
    ll k=1;
    while(n--)
    {
        k=k*2;
    }

    return k;

}
ll solve(ll x)
{
    ll day1 = power_2(x);
    ll total = expo(day1);
    ll modi = x-total;
    ll days = 1;
    while (modi>0)
    {
        // days+=power_2(mod);
        total+=expo(power_2(modi));
        modi = x-total;
        days++;
    }


    return days;


} 

int main()


{
    flash
    ll x; cin >> x;
    cout << solve(x);
    return 0;
}