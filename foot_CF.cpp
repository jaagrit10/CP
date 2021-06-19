// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||


void solve(ll n, char arr[])
{
    bool start = false;
    ll s = -1;
    ll e = -1;
    char prev = '.';
    forloop_n
    {
        if (arr[i]=='R' And start==false)
        {
            start = true;
            prev = arr[i];
            s = i;
        }
        if (arr[i]=='L' And prev=='R')
        {
            cout << s+1 << " " << i;
            return;
        }


    }

    start = false;
    prev = '.';

    forloop_n
    {

        if (arr[i]=='R')
        {
            
            prev = arr[i];
            
        }
        if (arr[i]=='.' And prev=='R')
        {
            cout << i << " " << i+1;
            return;
        }
    }

    start = false;
    prev = '.';
    for (ll i=n-1; i>-1; i--)
    {
        if (arr[i]=='L' And start==false)
        {
            start = true;
            prev = arr[i];
            s = i;
        }
        if (arr[i]=='.' and prev=='L')
        {
            cout << s+1 << " " << i+1;
            return;
        }
    }
}


int main()


{
    flash
    ll n ; cin >> n;
    char arr[n]; 
    forloop_n
    {
        cin >> arr[i];
    }
    solve(n,arr);

    return 0;
}