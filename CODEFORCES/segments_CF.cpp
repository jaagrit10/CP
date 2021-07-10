// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll solve(ll n, ll k)
{
    ll arr[n][2];
    ll ans = 0;
    forloop_n
    {
        cin >> arr[i][0] >> arr[i][1];
        // cout << arr[i][0] << " " << arr[i][1] <<endl;
    }

    forloop_n
    {
        ans+=(arr[i][1]-arr[i][0])+1;
    }

    return (k-ans%k)%k;
}
int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    ll n,k; cin >> n >> k;
    cout << solve(n,k);

	
	
	return 0;
}

