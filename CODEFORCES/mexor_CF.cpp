// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll a, ll b)
{
    ll lengthofthearray = a;
    ll check = a-1;

    ll xori = 0;
    if (check%4==0)
    {
        xori = check;
    }
    else if (check%4==1)
    {
        xori =1;

    }

    else if (check%4==2)
    {
        xori = check+1;

    }

    else if (check%4==3)
    {
        xori = 0;

    }
    
    // cout << xori  << endl;

    // cout << (xori^a) << endl;

    if (xori==b)
    {
        cout << a << "\n";
        return;
    }
    else if ((xori^a)!=b)
    {
        cout << a+1 << "\n";
        return;
    }

    else if ((xori^a)==b)
    {
        cout << a+2 << "\n";
        return;
    }

    

}
int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll a,b; cin >> a >> b;
        solve(a,b);
    }
    return 0;
}