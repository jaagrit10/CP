// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve (ll n)
{
    float temp = 0;
    ll lo = 1;
    ll hi = 11000;
    ll mid = 0;
    ll ans = 0;
    for (ll i = 1; i<11000; i++)
    {
        cout << i << endl;
        
        
        if (pow(i,3)>n)
        {
            cout << "NO" << "\n";
            cout << i << endl;
            return;
        }

        else
        {
            temp = n - pow(i,3);
            // cout << temp << " " << i << endl;
            // cout << "xxxxxxxxxxxxxx" << endl;

            lo = 1;
            hi = 11000;
            while (lo<=hi)
            {
                mid = lo + (hi- lo)/2;
                // cout << mid <<" " <<  "yo" << " " << pow(mid,3) << " " << temp <<  endl;
                if (temp==pow(mid,3))
                {
                    cout << "YES" << "\n";
                    return;
                }

                else if (pow(mid,3)>temp)
                {
                    hi = mid -1;
                }

                else
                {
                    lo = mid + 1;
                }


            }

            // if (pow(mid,3)==temp)
            // {
            //     cout << "YES" << "\n";
            //     return;
            // }

            


        }
    }
}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        solve(n);
    }
    return 0;
}