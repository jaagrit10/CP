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



int main()


{
    flash
    test_cases_loop
    {
        ll n,m,k; cin >> n >> m >> k;
        char arr[n][m];
        bool visited[n][m];
        bool ans = true;
        forloop_n
        {
        for (ll j = 0; j<m; j++)
        {
            visited[i][j]=false;
        }
        }

        forloop_n
        {
        for (ll j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
        }
        forloop_n
        {
        // for (ll j = 0; j<m; j++)
        // {
        //     cout << arr[i][j];
        // }
        // cout <<"\n";
        // }

        for(ll i = n-1; i>=n-k; i--)
        {
            for ( ll j = 0; j<k-n-1-i; j++)
            {
                // cout << arr[i][j];
                if (arr[i][j]=='*') 
                {
                    ans=false;
                    
                    
                }
            }

            for (ll p = m-1; p>=m-(k-(n-1-i));p--)
            {
                cout << i << " "<< p <<endl;
                if (arr[i][p]=='*')
                {
                    ans = false;
                }
            }
            cout << endl;

        }
        cout << arr[4][6] << endl;



        }

        if (!ans)
        {
            cout << "NO" <<"\n";
            
        }

        

    }

    return 0;
}