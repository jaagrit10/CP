// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||



int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif


    int n, m; cin >> n >> m;
    int arr[n];
    for (int i = 0; i < 2*n+1; i++)
    {
        cin >> arr[i];
    }
	
    // peaks(n,m,arr);
    for (int i=0; i<m; i++)

    {
        arr[2*i+1] -= 1;
        
    }

    
    for (int j =0; j < (2*n+1); j++)
    {
        cout << arr[j]  <<" ";
    }
	
	return 0;
}

