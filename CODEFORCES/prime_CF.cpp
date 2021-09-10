// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

bool isPrime(int n)
{
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

void solve(ll n, string s)
{
    forloop_n
    {
        int integer  = s[i]-'0';
        if (integer%2==0 And integer!=2)
        {
            // cout << s[i]-'0' << endl;
            // cout << "1" << endl;
            cout << 1 << "\n";
            cout << integer << "\n";
            return;
        }
        else if (integer%2==1 And isPrime(integer)==false)
        {
            // cout << "2" << endl;
            cout << 1 << "\n";
            cout << integer << "\n";
            return;

        }

        else if (integer==1)
        {
            // cout << "3" << endl;
            cout << 1 << "\n";
            cout << integer << "\n";
            return;

        }

    }


   
    forloop_n
    {
        int integer  = s[i]-'0';
        
        for (ll j = i+1; j<n; j++)
        {
            int number = s[j]-'0';
            int numbero = 10*integer+number;
            if (!isPrime(numbero))
            {
                cout << 2 << "\n";
                cout << numbero << "\n";
                return;
            }

        }
        

    }
    
}

int main()


{
    flash
    ll t; cin >> t; 
    while(t--)
    {
        ll n; cin >> n; 
        string s; cin >> s;
        solve(n,s);
    }
    return 0;
}