// https://codeforces.com/contest/474/problem/A
// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string s="";
    string ans="";
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    s=s+s1+s2+s3;

    string rightleft; cin >> rightleft;
    string yup; cin >> yup;
    int k=0;
    if (rightleft=="L")
    {
        for (int i=0;i<yup.length();i++)
        {
            k=s.find(yup[i]);
            ans+=s[k+1];
        }

    }
    else
    {
        for (int i=0;i<yup.length();i++)
        {
            k=s.find(yup[i]);
            ans+=s[k-1];
        }

    }

    cout << ans;
    
    


    return ;
}

int main()

{
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    // string k=solve();

    solve();

	
	
	return 0;
}

