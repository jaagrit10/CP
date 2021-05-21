// # # http://codeforces.com/contest/268/problem/A
// # def game(arr,n):
// # 	count=0
// # 	for i in range(n):
// # 		for j in range(i+1,n):
// # 			if arr[i][0]==arr[j][1]:
// # 				count+=14



// # 			if arr[i][1]==arr[j][0]:
// # 				count+=1

// # 	print(count)
// # 	return


// # n=int(input())
// # arr=[]
// # for i in range(n):
// # 	x=[int(x) for x in input().split()]
// # 	arr.append(x)


// # game(arr,n)
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
		freopen("input(CF).txt", "r", stdin);
		freopen("output(CF).txt", "w", stdout);
	#endif
	ll count=0;
	ll n;
	cin>>n;
	ll arr[n][2];
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1];
	}

	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if(arr[i][0]==arr[j][1]){
				count+=1;
			}

			if (arr[i][1]==arr[j][1]){
				count+=1;
			}
		}
	}

	cout<<count;

	// cout<<sqrt(3)<<endl;
	
	return 0;
}

