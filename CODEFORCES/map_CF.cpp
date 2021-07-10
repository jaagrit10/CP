// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n,ll arr[])
{
    
    ll op = ceil((float)n/2);
    // cout << op <<endl;
    map<ll, ll> freq;
    for (ll i=0; i<n; i++)
    {
        if (freq.find(arr[i])!=freq.end())
        {
            freq[arr[i]]+=1;
        }
        else
        {
            freq[arr[i]]=1;
        }
    }
    
    ll maxi = -1;
    map<ll,ll> ::iterator it;
    for (it =freq.begin(); it!=freq.end(); it++)
    {
        // cout << it->first << " " << it->second <<endl;
        maxi = max(maxi,it->second);
    }

    // cout << maxi <<endl;

    if (maxi<=op)
    {
        cout << "YES";
        return;
    }

    else
    {
        cout << "NO";
        return;
    }

    


}


int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    ll n; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    solve(n,arr);
	
	
	return 0;
}

