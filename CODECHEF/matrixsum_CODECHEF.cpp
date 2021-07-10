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
		long long int sum=0;
		long long int arr[n][n];
		for (long long int i=0;i<n;i++){
			for(long long int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}

		for (long long int k=0;k<n;k++){
			sum+=arr[k][k];
		}

		for (long long int l=0;l<n;l++){
			sum+=arr[l][n-l-1];

		}

		if (n%2==0){
			cout<<sum<<endl;
		}

		else{
			cout<<(sum-arr[n/2][n/2])<<endl;
		}
	}


		
	
	return 0;
}

