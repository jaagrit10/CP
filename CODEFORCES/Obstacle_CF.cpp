// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll xa, ll ya, ll xb, ll yb, ll xf, ll yf)
{
    ll shortestpath = 0;
    if (xa==xf And xb==xf)
    {
        if (ya>yb And yf>yb And yf<ya)
        {
            shortestpath=ya-yb+2;

        }

        else if (ya<yb And yf<yb And yf>ya)
        {
            shortestpath=yb-ya+2;
        }

        else
        {
            shortestpath=abs(yb-ya);
        }

    }

    else if (ya==yf And yb==yf)
    {
        if (xa>xb And xf>xb And xf<xa)
        {
            shortestpath=xa-xb+2;

        }

        else if (xa<xb And xf<xb And xf>xa)
        {
            shortestpath=xb-xa+2;
        }

        else
        {
            shortestpath=abs(xb-xa);
        }
        
    }

    else
    {
        shortestpath=abs(yb-ya)+abs(xa-xb);
    }


    cout << shortestpath << "\n";
    return;
}

int main()


{
    flash
    ll t; cin >> t;
    for (ll i=0; i<t; i++)
    {
        ll xa,xb,ya,yb,xf,yf;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        solve(xa,ya,xb,yb,xf,yf);

    }
    

    return 0;
}