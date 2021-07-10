// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

ll solve(ll n, ll m)
{
    
    ll c1 = n/5;
    ll c2 = m/5;

    ll res = c1*c2;


    

    int cr1 = n%5;
    int cr2 = m%5;
    ll ans1,ans2;


    for (int i=1; i<5; i++)
    {
        if (cr1 >= i )
        {
            ans1 = c1+1;
        }

        else{
            ans1 = c1;
        }
        if (cr2 >= 5-i )
        {
            ans2 = c2+1;
        }

        else{
            ans2 = c2;
        }


        res += ans1*ans2;
    }



    return res;
}

int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif


    ll  n,m ; cin >> n >> m ;

    cout << solve(n,m);

	
	
	return 0;
}

