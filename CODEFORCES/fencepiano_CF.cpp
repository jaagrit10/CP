// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll k, ll arr[])
{
    ll cummulative_arr[n+1]={0};
    ll sum_ = 0;
    forloop_n
    {
        sum_+=arr[i];
        cummulative_arr[i+1] = sum_;

    }
    ll min_sum = INT32_MAX;
    ll sumofk = 0;
    ll ans = 0;

    for(ll i=k; i<n+1; i++)
    {
        sumofk = cummulative_arr[i]-cummulative_arr[i-k];
        if (sumofk<min_sum)
        {
            ans = i-k+1;
            min_sum = sumofk;
        } 


    }

    cout << ans;

    
}

int main()


{
    flash
    ll n, k; cin >> n >> k;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    solve(n,k,arr);
    return 0;
}