// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void rating(ll n)
{
    ll arr[n];
    forloop_n
    {
        
        cin >> arr[i];
    }

    bool odd = false;

    forloop_n
    {
        if (arr[i]%2==0)
        {
            cout << arr[i]/2 << "\n";
        }
        
        else
        {
            // float z = arr[i]/2;
            if (odd==false)
            {
                ll p = ceil((float)arr[i]/2);
                if (p==-0)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << ceil((float)arr[i]/2) <<endl;

                }
                
                odd = true;
            }
            else
            {
                cout << floor((float)arr[i]/2) <<endl;
                odd = false;
            }
        }
    }
}


int main()


{
    flash

    ll n ; cin >> n;

    rating(n);

    float z = -1/2;
    // cout << ceil((float)3/2);
    cout << ceil(-0.5) <<endl;
    // cout << -0;
    return 0;
}