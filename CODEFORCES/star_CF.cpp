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

 
int main()
{	
	flash
	ll n, q, c;
	cin>>n>>q>>c;
	ll dp[11][101][101]{0};
	for(ll i = 0; i < n; i++){
		ll x, y, s;
		cin >> x >> y >> s;
		for(ll time = 0; time <= c; time++){
			dp[time][x][y] += s;
			s += 1;
			if (s > c){
				s = 0;
			}
		}
	}
	for(ll time = 0; time <= c; time++){
		for(ll i = 0; i <= 100; i++){
			for(ll j = 0; j <= 100; j++){
				dp[time][i][j] += dp[time][i - 1][j] + dp[time][i][j - 1] - dp[time][i - 1][j - 1];
			}
		}
	}
	
	for(ll i = 0; i < q; i++){
		ll t, x1, y1, x2, y2;
		cin>>t>>x1>>y1>>x2>>y2;
		t %= (c + 1);
		cout<<(dp[t][x2][y2] - dp[t][x2][y1 - 1] - dp[t][x1 - 1][y2] + dp[t][x1 - 1][y1 - 1])<<endl;
	}

	// ll arr[2]{0};
	// ll ans = arr[1];
	// cout << ans;
	return 0;
}