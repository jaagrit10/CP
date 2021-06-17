// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, string dir, ll xi[])
{
    vector<ll> time;
    bool start = false;
    ll s = 0;
    ll e = 0;
    ll t = 0;
    for (ll i=0; i<n; i++)
    {

        if (dir[i]=='R')
        {
            start = true;
            s = xi[i];
        }

        else if (dir[i]=='L' And start==true)
        {
            e = xi[i];
            start = false;
            t = (e-s)/2;
            time.push_back(t);
        }
        
    }
    
    sort(time.begin(),time.end());

    if (time.size()>0)
    {
        cout << time[0];
    }
    else{
        cout << -1;
    }

    
}


int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif


    ll n ; cin >> n;
    string dir; cin >> dir;
    ll xi[n];
    
    
    forloop_n
    {
        cin >> xi[i];
    }
    

    solve(n,dir,xi);

	
	
	return 0;
}

