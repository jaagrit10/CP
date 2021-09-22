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



void solve2(ll a,ll b,ll c, ll m,ll arr[])

{
    ll pair = 0;
    
    sort(arr,arr+3);

    

    if (a+b+c-3<m Or arr[2]-(arr[1]+arr[0])-1>m)
    {
        cout << "NO" << "\n";
        return;

    }


    // if (arr[2]-(arr[1]+arr[0])-1>m)
    // {
    //     cout << "NO" << "\n";
    //     return;
    // }

    cout << "YES" << "\n";
    return;

}

int main()


{
    flash
    test_cases_loop
    {
        ll a,b,c,m; cin >> a >> b >> c >> m;
        ll arr[3] = {a,b,c};
        solve2(a,b,c,m,arr);
        
    }
    return 0;
}