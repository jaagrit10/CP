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
#define test_cases_loop ll t; cin >> t; while(t--)
int main()


{
    flash
    test_cases_loop
    {
        ll n; cin >> n;
        ll arr[n];
        forloop_n
        {
            cin >> arr[i];
        }

        deque<ll> dp;
        dp.pb(arr[0]);
        for (ll i = 1; i<n; i++)
        {
            ll front = dp.front();
            if (arr[i]<front)
            {
                dp.push_front(arr[i]);
            }

            else
            {
                dp.pb(arr[i]);
            }



        }

        while(!dp.empty())
        {
            ll front = dp.front();
            dp.pop_front();

                cout << front << " ";
        }

        cout << "\n";
    }
    return 0;
}