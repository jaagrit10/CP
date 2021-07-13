// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n)
{
    ll arr[n];
    forloop_n
    {
        cin >> arr[n];
    }

    sort(arr,arr+n);

    for (ll i = 0; i<n-2; i++)
    {
        if (arr[i] + arr[i+1] > arr[i+2])
        {
            cout << "YES";
            return;
        }
    }



    cout << "NO";
    return;
    
}

int main()


{
    flash
    ll n; cin >> n;
    solve(n);
    return 0;
}