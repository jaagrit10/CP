// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll arr[])
{
    float average = 0;
    forloop_n
    {
        average+=(float)arr[i]/n;
    }
    // cout << average<<endl;
    sort(arr,arr+n);
    // forloop_n
    // {
        // cout << arr[i] << " ";
    // }
    // cout << endl;

    float average1 = (float)ceil(average) - average;
    float average2  = average - (float)floor(average);
    // cout << average1 << " " << average2 <<endl;
    cout << ceil(average2*average1*n*n) <<endl;
    return;
}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll arr[n];
        forloop_n
        {
            cin >> arr[i];
        }
        solve(n,arr);
    }
    return 0;
}