// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||




int main()


{
    flash

    vector<string> precalc;
    ll temp = 1;
    for (ll i = 0; i<60; i++)
    {
        precalc.push_back(to_string(temp));
        temp = temp*2;
    }


    ll t; cin >> t; 
    while(t--)
    {
        string n; cin >> n;
        ll minimumsteps = 10;
        for (ll i = 0; i<60; i++)
        {
            ll check = 0;
            for ( ll j = 0; j<n.size(); j++)
            {
                if (n[j]==precalc[i][check])
                {
                    check++;
                }
                if (check==precalc[i].size())
                {
                    break;
                }
            }

            minimumsteps = min(precalc[i].size()+n.size()-2*check,minimumsteps);

        }

        cout << minimumsteps << "\n";
    }



    return 0;
}