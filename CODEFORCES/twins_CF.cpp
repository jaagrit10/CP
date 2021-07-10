// # # https://codeforces.com/contest/160/problem/A
// # def twins(n,arr):
// #     sum_=sum(arr)
// #     arr.sort(reverse=True)
// #     coins=0
// #     count=0
// #     for i in range(n):
// #         if coins<=sum_:
// #             sum_-=arr[i]
// #             coins+=arr[i]
// #             count+=1



// #     print(count)
// #     return


// # n=int(input())
// # arr=[int(arr) for arr in input().split()]
// # twins(n,arr)

// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
// #define int long long int

int solve(int n,int arr[])
{
    int sum_=0;
    for (int i=0;i<n;i++)
    {
        sum_+=arr[i];

    }

    sort(arr, arr + n, greater<int>());
    int coins=0;
    int count=0;
    for(int i=n-1;i>-1;i--)
    {
        if (coins<=sum_)
        {
            sum_-=arr[i];
            coins+=arr[i];
            count++;
        }
    }

    // cout << count <<"\n";

    return count;

}

int main()

{
	#ifndef ONLINE_JUDGE  //for solving questions in an online judge
		freopen("inputCF.txt", "r", stdin);
		freopen("outputCF.txt", "w", stdout);
	#endif

    int n; cin >> n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << solve(n,arr) <<"\n";








	
	
	return 0;
}


