// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=1; i<=n; i++)
#define And &&
#define Or ||
#define vi vector<ll>
#define pb(n) push_back(n)
#define test_cases_loop ll t; cin >> t; while(t--)



int main()


{
    flash
    ll n,m; cin >> n >> m;
    
    ll arr[n+1][m+1];
    for(ll i =0; i<=m; i++)
    {
        arr[0][i] = 0;
    }
    forloop_n{for(ll j = 1; j<=m; j++){cin>>arr[i][j];}}
    
    ll sum_of_column = 0;
    ll sum_of_row = 0;
    forloop_n
    {
        sum_of_column = 0;
        for (ll j = 1; j<=m; j++)
        {
            sum_of_column += arr[i][j];
            sum_of_row=arr[i-1][j];
            arr[i][j] = sum_of_column + sum_of_row;
        }

        


    }
    forloop_n
    {
        for(ll j = 1; j<=m; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    // propermethod
    vector<vi> arr(n+1,vi(m+1)), dp(n+1,vi(m+1));
    for (ll i = 1; i<=n; i++ )
    {
        for (ll j = 1; j<=m; j++)
        {
            dp[i][j] = arr[i][j] + dp[i-1][j] + dp[i][j] - dp[i-1][j-1];
        }
    }
    


    


    return 0;
}