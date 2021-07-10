// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll l, ll n, ll arr[])
{
    
    sort(arr,arr+n);
    double max_distance = max((double)arr[0],(double)l-arr[n-1]);
    for (ll i = 0; i<n-1; i++)
    {
        max_distance = max(max_distance,(((double)(arr[i+1]-arr[i]))/2));
        // cout << max_distance <<endl;

    }

    cout <<fixed<< setprecision(9) <<max_distance;
    
    return;


}


int main()


{
    flash
    ll n,l; cin >> n >> l;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    
    solve(l,n,arr);
    return 0;
}