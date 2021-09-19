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

void solve(ll d, ll n, ll k)
{
    ll arr[d+2]{0};
    ll happy[d+2]{0};
    forloop_n
    {
        ll hi, si, ei; cin >> hi >> si >> ei;
        arr[si]+=1;
        arr[ei+1]-=1;
        happy[si]+=hi;
        happy[ei+1]-=hi;

    }
    ll sum1 = 0;
    ll sum = 0;

    for(ll i = 1; i<d+1; i++)
    {
        sum+=arr[i];
        arr[i] = sum;
        sum1 += happy[i];
        happy[i] = sum1;
    }

    for(ll i = 1; i<d+1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (ll i = 1; i<d+1; i++)
    {
        cout << happy[i] << " ";
    }
    cout << endl;




    ll maxhappiness = 0;
    for(ll i = 1; i<d+1; i++)
    {
        
        if (arr[i]<=k)
        {
            maxhappiness = max(maxhappiness,happy[i]);
        }
    }


    cout << maxhappiness << "\n";
    

}

int main()


{
    flash
    ll t; cin >> t; 
    for (ll op = 1; op <=t; op++)
    {
        ll d,n,k; cin >>d>> n >> k; 
        
        cout << "Case #" << op << ":" << " ";
        solve(d,n,k);


    }
    return 0;
}