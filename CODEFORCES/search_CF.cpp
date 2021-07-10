// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll arr[], ll m, ll query[])
{
    unordered_map<ll, ll> vasyaindices;
    for (ll i = n-1; i>-1; i-- )
    {
        vasyaindices[arr[i]] = i; 
    }

    unordered_map <ll,ll> petyaindices;
    for (ll i=0; i<n; i++)
    {
        petyaindices[arr[i]] = i;
    }

    ll vasya = 0;
    ll petya = 0;
    ll check = 0;

    for (ll i = 0; i<m; i++)
    {
        check = query[i];
        vasya+=vasyaindices[check]+1;
        petya+=n-petyaindices[check];
    }

    cout << vasya << " " << petya;
    return;
}
int main()


{
    flash
    ll n, m; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }

    cin >> m;
    ll query[m];
    
    for (ll i=0; i<m; i++)
    {
        cin >>query[i];
    }

    solve(n, arr, m, query);
    return 0;
}