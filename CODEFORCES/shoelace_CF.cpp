// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll m)
{
    unordered_map<ll,ll> freq;
    ll p1,p2;
    for ( ll i = 0; i<m; i++)
    {
        cin >> p1 >> p2;
        if (freq.find(p1)==freq.end())
        {
            freq[p1] = 1;
        }

        else
        {
            freq[p1]+=1;
        }

        if (freq.find(p2)==freq.end())
        {
            freq[p2] = 1;
        }
        else
        {
            freq[p2]+=1;
        }

        
    }

    for (auto p : freq)
    {
        cout << p.first <<"-->"<< p.second << "\n";

    }



}

int main()


{
    flash
    ll n, m; cin >> n >> m;
    solve(n,m);
    return 0;
}