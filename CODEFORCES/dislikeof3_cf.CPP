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
    ll temp = 0;
    ll i = 1;
    while(i<=n)
    {
        temp+=1;

        if (temp%3==0 Or temp%10==3)
        {
            continue;
        }
        else
        {
            i++;
        }



    }

    cout << temp << "\n";
    return;
}

int main()


{
    flash
    ll t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n;
        solve(n);
    }
    return 0;
}