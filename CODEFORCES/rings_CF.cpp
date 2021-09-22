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
    forloop_n
    {
        if (n%2==0){
            if (s[i]=='0' And i+1<=n/2) 
        {
            cout << i+1 << " " << n << " " << i+2 << " " << n << "\n";
            return;
            
        }

        else if (s[i]=='0' And i+1>n/2)
        {
            cout << 1 <<" " <<  i+1 << " " <<  1 << " " << i << "\n";
            return;
        }

        }


        else
        {
            if (s[i]=='0' And i+1<n/2+1 )
        {
            cout << i+1 << " " << n << " " << i+2 << " " << n << "\n";
            return;
            
        }

        else if (s[i]=='0' And i+1>n/2+1)
        {
            cout << 1 <<" " <<  i+1 << " " <<  1 << " " << i << "\n";
            return;
        }


        // else if (s[i]=='0' And i+1 == n/2+1 )
        // {
        //     cout << 1 << " " << i+1 << " " << i+1 << " " << n << "\n";
        //     return; 
        // }
        }




        


        
    }

    if (n%2!=0 And s[n/2]=='0' )
    {
        cout << 1 << " " << n/2+1 << " " << n/2+1 << " " << n << "\n";
        return;

    }


    cout << 1 << " " << n-1 << " " << 2 << " " << n << "\n";
    return;
}

int main()


{
    flash
    test_cases_loop
    {
        ll n; cin >> n; 
        string s; cin >> s;
        solve(n,s);
    }
    return 0;
}