// TEMPLATE_JAAGRIT_ARORA
#include <iostream>
#include <bits/stdc++.h>
#include <string>
// #include <vector>
using namespace std;
#define ll long long int

int main()

{
	#ifndef ONLINE_JUDGE  //for solving questions in an online judge
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll Danik=0;
	ll anton=0;
	
	for (ll i=0;i<n;i++){

		
		if (s[i] == 'D'){
			Danik++;
		}
		else{
			anton++;
		}

	}

	if (Danik==anton){
		cout<<"Friendship";
	}
	else if(Danik>anton){
		cout<<"Danik";}

	else{
		cout<<"Anton";
	}
	
	return 0;
}

