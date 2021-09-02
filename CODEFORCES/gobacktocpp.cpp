// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll solve(ll n, ll k, string s)
{
    vector<int> pos;
    for (ll i = 0; i<n; i++)
    {
        if (s[i]=='*')
        {
            pos.push_back(i);
        }
    }
    int leng = pos.size();
    ll ans = 0 ;
    ans = min(leng, 2);
    if (ans==1)
    {
        return ans;
    }
    int i = 0; 
    int j = 1;

    while (i<leng)
    {
        while (j<leng)
        {
            if ((pos[j]-pos[i])<=k)
            {
                if (j==leng-1)
                {
                    return ans;
                }

                j++;
            }

            else
            {
                ans++;
                i = j-1;
                break;
            }

            
        }
    }


    return ans;




}

int main()


{
    flash
    ll t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n  >> k;
        string s; cin >> s;
        cout << solve(n,k,s) << "\n";
    }
    
    return 0;
}