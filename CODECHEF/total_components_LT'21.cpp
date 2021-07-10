// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
// #define int long long int



bool isPrime(long long int n)
{
    if (n <= 3)
        return true;
  
    
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main()
{
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    long long int t; cin>>t;
    while (t--)

    {
        long long int count=1;
        long long int n; cin >> n;
        for (long long int check=2;check<=n;check++)
        {
            if (check%2!=0)
            {
                if (isPrime(check) && check*2>n)

                {
                    count+=1;

                }

            }
        }

        cout << count << "\n";

    }


	
	
	return 0;
}

