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
#define test_cases_loop ll t; cin >> t; while(t--)

void solve(ll n, string s)
{
    ll ans = 0;
    ll no_of_starting = 0;
    ll i = 0;
    while(i<n)
    {
        if (s[i]=='1')
        {
            ans+= no_of_starting*(no_of_starting+1)/2;
            break;
        }

        else
        {
            no_of_starting++;

        }

        i+=1;

    }
    // cout << ans << endl;
    ll j = n-1;
    ll no_of_ending = 0;

    while(j>-1)
    {
        if (s[j]=='1')
        {
            ans+= no_of_ending*(no_of_ending+1)/2;
            break;

        }
        else
        {
            no_of_ending++;
        }


        j-=1;
    }
    // cout << ans << endl;
    ll count = 0;
    // cout << i << " " << j << endl;

    

    while(i<=j)
    {
        // count = 0;

        if (s[i]=='1')
        {
            
            if (count%2==0)
            {
                ans += (count/2)*(count/2+1);
            }
            else
            {
                ans+= (count/2)*(count/2+1) + count/2+1;
            }
            count = 0;
        }


        else
        {
            count++;
        }

        // cout << count << " " << i << " " << ans <<  endl;

        i++;
    }




    cout << ans << "\n";



    
}

int main()


{
    flash
    ll t; cin >> t; 
    for (ll op = 1; op <=t; op++)
    {
        ll n; cin >> n; 
        string s; cin >> s;
        cout << "Case #" << op << ":" << " ";
        solve(n,s);


    }
    return 0;
}