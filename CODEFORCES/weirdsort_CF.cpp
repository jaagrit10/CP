// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||
#define vi vector<ll>
#define pb(n) push_back(n)

void swap(ll* x, ll *y)
{
    ll temp;
    temp = *x;
    *x = *y;
    *y= temp;
    return;
}

void solve(ll n, ll arr[])
{
    bool changeodd = true;
    ll checkodd = 0;
    ll checkeven = 0;
    bool changeeven = true;
    ll i = 0;
    ll iterations = 0;
    bool sorted = false;
    ll x = 0;
    ll y = 0;


    while((changeeven==true Or changeodd==true))
    {
        checkodd = 0;
        checkeven = 0;
        if (i%2==0)
        {
            ll j = 0;
            while(j<n-1)
            {
                // cout << 1 << endl;
                x = arr[j];
                y = arr[j+1];

                if (x<=y)
                {
                    checkodd++;
                }
                else if (x>y)
                {
                    swap(&arr[j],&arr[j+1]);

                    changeodd = true;

                }

                j=j+2;

            }

            if (checkodd == n/2)
            {
                changeodd = false;
            }

            iterations++;

            if (changeodd==false And changeeven==false)
            {
                iterations--;
                cout << iterations-1 << "\n";
                return;
            }


            i++;

            

        }


        else
        {
            for (ll j = 1; j <n; )
            {
                if (arr[j]<=arr[j+1])
                {
                    checkeven++;
                }
                else if (arr[j]>arr[j+1])
                {
                    // swap(&arr[j],&arr[j+1]);
                    swap(&arr[j],&arr[j+1]);
                }

                j+=2;
            }
            if (checkeven==n/2)
            {
                changeeven = false;
            }
            iterations++;
            if (changeeven==false And changeodd==false)
            {
                iterations--;
                cout << iterations-1 << "\n";
                return;
            }
            i++;


            
        }

        // i+=1;

        
    }

    // forloop_n
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";


    cout << iterations << "\n";
    return; 

    
}

int main()


{
    flash
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n; 
        ll arr[n];
        forloop_n
        {
            cin >> arr[i];
        }
        // cout << n;
        solve(n, arr);
    }
    return 0;
}