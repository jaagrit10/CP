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

void swap( ll * x, ll * y)
{
    ll temp = *x;
    *x = *y;
    *y = temp;
    return;

}


void insertionSort(ll n, ll arr[])
{
    for (ll i = 1; i<n; i++)
    {
        for (ll j = i-1; j>-1; j--)
        {
            // cout  << arr[j] << " " << arr[j+1] << endl;
            if (arr[j]>arr[j+1])
            {
                swap(arr[j+1],arr[j]);
            }

        }
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
    insertionSort(n,arr);
    forloop_n
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}