// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll vect[])
{
    
    // forloop_n
    // {
    //     cout << vect[i] << " ";
    // }

    // cout << "\n";

    ll similar = 1;
    // ll prev = vect[0];
    ll check = vect[0];

    for (ll i = 1; i<n; i++)
    {

        if (similar==0)
        {
            check = vect[i];
            similar=1;
            continue;
        }
        else if (check==vect[i] )
        {

            similar+=1;
            check = vect[i];
        }

        else if (check!=vect[i])
        {
            similar-=1;
        }


    



    }

    cout << similar << "\n";

}
int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll vect[n];
        forloop_n
        {
            cin >> vect[i];
        }
        solve(n,vect);
    }
    return 0;
}
// 10000
// 1
// 1
// 2
// 1 1
// 2
// 1 2
// 2
// 2 2
// 3
// 1 1 1
// 3
// 1 2 1
// 3
// 1 1 3
// 3
// 1 2 2
// 3
// 1 2 3
// 3
// 3 1 3
// 3
// 2 2 2
// 3
// 2 2 3
// 3
// 2 3 3
// 3
// 3 3 3
// 4
// 1 1 1 1
// 4
// 1 2 1 1
// 4
// 1 1 3 1
// 4
// 1 1 4 1
// 4
// 1 1 2 2
// 4
// 2 1 3 1
// 4
// 1 4 1 2
// 4
// 1 3 3 1
// 4
// 3 1 1 4
// 4
// 4 4 1 1
// 4
// 1 2 2 2
// 4
// 3 1 2 2
// 4
// 4 1 2 2
// 4
// 3 1 2 3
// 4
// 3 4 1 2
// 4
// 2 1 4 4
// 4
// 3 1 3 3
// 4
// 3 4 1 3
// 4
// 1 4 4 3
// 4
// 4 4 4 1
// 4
// 2 2 2 2
// 4
// 3 2 2 2
// 4
// 2 4 2 2
// 4
// 2 3 2 3
// 4
// 2 3 4 2
// 4
// 4 2 4 2
// 4
// 3 3 2 3
// 4
// 2 3 3 4
// 4
// 3 2 4 4
// 4
// 4 2 4 4
// 4
// 3 3 3 3
// 4
// ...