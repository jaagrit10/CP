// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

int power(ll x,ll n,ll m){
    if(n==0) return 1;
    x%=m;
    if(n%2){
        return x*power(x*x%m,(n-1)/2,m)%m;
    }
    return power(x*x%m,n/2,m)%m;
}

ll ncr(ll n, ll r , ll mod, ll factorial[])
 
{
    ll x = factorial[n-r]%mod*factorial[r]%mod;
    return factorial[n]/x;
 
}
 
void solve(ll n, ll factorial[], ll arr[], ll mod)
{
    sort(arr,arr+n);
 
    ll secondmax = 0;
    ll secondlargest = arr[n-2];
    if (arr[n-1]==arr[n-2])
    {
        cout << factorial[n] << "\n";
        return;
    }
 
    else if (arr[n-1]-arr[n-2]>1)
    {
        cout << 0 << "\n";
        return;
    }
 
    else
    {
        for (ll i=0; i<n; i++)
        {
            if (arr[i]==arr[n-2])
            {
                secondmax+=1;
            }
        }
        // cout << n << " " << secondmax << endl;
 
        // cout << (factorial[n] - ncr(n,secondmax+1,mod,factorial)%mod*(factorial[secondmax]%mod*factorial[n-secondmax-1]%mod)%mod+mod)%mod << "\n";
        cout << (mod + factorial[n] - factorial[n]%mod*power(secondmax+1,mod-2,mod)%mod)%mod << "\n";

        // cout << factorial[6] - ncr(6,4,mod,factorial)*factorial[3]*factorial[2] <<endl; 
        return;
        
 
 
 
    }
}
 
 
int main()
 
 
{
    flash
    ll factorial[200005];
    factorial[0] = 1;
    // precalc
    ll temp = 1;
    ll mod = 998244353;
    
    for (ll i = 1; i<2*100000 + 5; i++)
    {
        factorial[i] = temp;
        temp = temp*(i+1)%mod;
 
    }
 
    ll t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n;
        ll arr[n];
        forloop_n
        {
            cin >> arr[i];
        }
        // cout << ncr(6,4,mod,factorial) <<endl;
 
        solve(n,factorial,arr,mod);
 
 
    }
    return 0;
}

