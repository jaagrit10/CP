// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll arr[], ll m)
{
    ll cummulative_arr[n+1]={0};
    ll sum_ = 0;
    forloop_n
    {
        sum_+=arr[i];
        cummulative_arr[i+1] = sum_;

    }

    sort(arr,arr+n);
    ll sorted_sum[n+1]={0};
    ll sorted_sum_= 0;

    forloop_n
    {
        sorted_sum_+=arr[i];
        sorted_sum[i+1] = sorted_sum_;
    }

    for (ll i=0; i<m; i++)
    {
        ll type,l,r; cin >> type >> l >> r;
        if (type==1)
        {
            cout << cummulative_arr[r]-cummulative_arr[l-1]<<"\n";


        }
        else
        {
            cout << sorted_sum[r]- sorted_sum[l-1] << "\n";
        }

    }

    return;
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

    ll m; cin >> m;
    solve(n,arr,m);
    return 0;
}