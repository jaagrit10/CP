// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

void solve()
{
    string drazil; cin >> drazil;
    string dreamoon; cin >> dreamoon;

    ll plus_drazil = 0;
    ll minus_drazil = 0;
    ll plus_doreamoon = 0;
    ll minus_doreamoon = 0;
    ll vacant = 0;
    for (ll i = 0; i<drazil.size(); i++)
    {
        if (drazil[i]=='+')
        {
            plus_drazil++;
        }

        else if (drazil[i]=='-')
        {
            minus_drazil++;
        }

        if (dreamoon[i]=='+')
        {
            plus_doreamoon++;

        }

        else if (dreamoon[i]=='-')
        {
            minus_doreamoon++;
        }


        else
        {
            vacant++;
        }
    }

    float x = 1;

    if (plus_doreamoon==plus_drazil And minus_doreamoon==minus_drazil And vacant==0)
    {
        cout << fixed << setprecision(9) << x;
        return;
    }
    ll minus = 0;
    ll plus = 0;



    if (plus_drazil-plus_doreamoon>vacant Or minus_drazil-minus_doreamoon>vacant)
    {
        cout << fixed << setprecision(9) << x-1;
    }

    else
    {
        minus = minus_drazil - minus_doreamoon;
        plus = plus_drazil - plus_doreamoon;
        cout << fixed << setprecision(9) << x*nCr(vacant,minus)/pow(2,vacant);

    }
    return;





}

int main()


{
    flash
    solve();
    return 0;
}