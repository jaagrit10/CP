// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void number(ll n)
{
    string ans = "";
    while (n>0)
    {
        int k = n%10;
        if (k>=5)
        {
            ans+=to_string(9-k);
        }

        else
        {
            ans+= to_string(k);
        }

        n = n/10;

    }

    // string checker = "";

    // if (ans == "0")
    // {
    //     cout << 9;
    //     return;
    // }

    // for (int i=0; i<18; i++)
    // {
    //     checker+="0";
    //     // cout << checker <<endl;
    //     if (checker==ans)
    //     {
    //         cout << 1;
    //         return;
    //     }

    // }


    for (int i = ans.length()-1; i>=0; i--)
    {
        if (i==ans.length()-1 And ans[i]=='0')
        {
            cout << 9;
        }
        else{
            cout << ans[i];
        }
        
    }

    return;
}

int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    ll n; cin >> n ;
    number(n);
	
	
	return 0;
}

