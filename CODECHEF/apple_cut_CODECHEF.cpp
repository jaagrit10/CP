// TEMPLATE_JAAGRIT_ARORA
#include <iostream>
#include <bits/stdc++.h>
#include <string>
// #include <vector>
using namespace std;

int main()

{
	#ifndef ONLINE_JUDGE  //for solving questions in an online judge
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	long long int t;
	cin>>t;
	while (t--){
		long long int n;
		cin>>n;
		if (n%2==0 and n!=2){
			cout<<"YES"<<"\n";

		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	
	return 0;
}

