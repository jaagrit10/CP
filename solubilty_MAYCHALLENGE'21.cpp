#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()

{
	#ifndef ONLINE_JUDGE  //for solving questions in an online judge
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll x,a,b;
		cin>>x>>a>>b;
		a=a+(100-x)*b;
		a=10*a;
		cout<<a<<"\n";
	}
	
	return 0;
}

