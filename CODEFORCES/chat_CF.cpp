// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll p, ll q, ll l, ll r)
{
    ll arr[2500];
    for (ll i=0; i<2500; i++)
    {
        arr[i] = 0;
    }
    ll z[p][2];
    for (ll i = 0; i<p; i++)
    {
        cin >> z[i][0] >> z[i][1];
    }
    ll a = 0;
    ll b = 0;

    for (ll i = 0; i<p; i++)
    {
        a = z[i][0];
        b = z[i][1];
        arr[a] = 1;
        arr[b+1] = -1; 

    }
    // for (ll debug = 0; debug<10; debug++)
    // {
    //     cout << arr[debug] << " ";
    // }

    ll x[q][2];
    for (ll i=0; i<q; i++)
    {
        cin >> x[i][0]>> x[i][1];
    }

    ll s = 0;
    ll e = 0;
    ll sum = 0;
    ll ans = 0;
    bool innerloop = true;


    for (ll i = l; i<r+1; i++)
    {
        innerloop = true;
        for (ll j = 0; j<q; j++)
        {
            if (innerloop==true)
            {
                s = x[j][0] + i;
                e = x[j][1] + i;
                arr[s]+=1;
                arr[e+1]-=1;
                sum = 0;

                // for (ll debug = 0; debug<10; debug++)
                // {
                //     cout << arr[i] << " ";
                // }

                for (ll op = 0; op<2500; op++)
                {
                    sum += arr[op];
                    arr[op] = sum;
                }

                // for (ll debug = 0; debug<10; debug++)
                // {
                //     cout << arr[debug] << " ";
                // }
                for (ll op = 0; op<2500; op++)
                {
                    if (arr[op]>=2)
                    {
                        ans++;
                        innerloop = false;
                        break;
                        
                        
                    }
                }
                for (ll op=0; op<2500; op++)
                {
                    arr[op] = 0;
                }

                for (ll op = 0; op<p; op++)
                {
                    a = z[op][0];
                    b = z[op][1];
                    arr[a] = 1;
                    arr[b+1] = -1; 

                }

            }

            else{
                break;
            }




            
        }
        

    }


    cout << ans;
    return;

}

int main()


{
    flash
    ll p, q, l, r; cin >> p >> q >> l >> r;
    solve(p,q,l,r);
    return 0;
}