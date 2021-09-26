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

void solve(ll n, ll q, ll arr[])
{
    vi v(n+2,0);

    while(q--)
    {
        ll a,b; cin>>a>>b;

        v[a-1]+=1;
        v[b]-=1;

    }


    for(ll i = 1; i<n+2; i++)
    {
        v[i]+=v[i-1];
        


    }


    for (ll i = 0; i<n; i++)
    {
        if (v[i]%2!=0)
        {
            arr[i] = 1-arr[i];
        }
        
    }

    forloop_n
    {
        cout << arr[i] << " ";
        return;
    }

}

int main()


{
    flash
    ll n; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    ll q; cin >> q;
    
    cout << endl;
    solve(n,q,arr);
    forloop_n
    {
        cout << arr[i] << " ";
    }
    return 0;
}