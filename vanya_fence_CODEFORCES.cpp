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

	long long int n,h;
	cin>>n>>h;
	long long int arr[n];
	for (long long int i=0;i<n;i++){
		cin>>arr[i];
		// if (arr[i]>h){
		// 	count+=2;
		// }
		// else{
		// 	count++;
		// }

	}
	
	long long int count=0;

	for (long long int j=0;j<n;j++){
		
		if (arr[j]>h){
			
			count=count+2;
			
		}
		else{
			count=count+1;
		}

	}
	cout<<count;


	
	return 0;
}

