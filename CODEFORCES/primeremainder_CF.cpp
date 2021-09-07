// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

// void solve(ll p)
// {
//     for (ll i=2; i<p+1; i++)
//     {
//         for(ll j = i+1; j<p+1; j++)
//         {
//             if (p%i==p%j)
//             {
//                 cout << i << " " << j << "\n";
//                 return;
//             }
//         }
//     }
// }

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll p; cin >> p;
        cout << 2 << " " << p-1 << "\n";
    }
    return 0;
}