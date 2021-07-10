// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

bool solve(string s1,string s2)
{
    ll left = 0;
    ll right = 0;
    string leftbal = "";
    string rightbal = "";


    ll i = 0;
    while(i<s1.length())
    {
        if (s1[i]!='|')
        {
            leftbal+=s1[i];
            left+=1;
            i+=1;
        }

        else if (s1[i]=='|')
        {
            i+=1;
            break;
            
        }
        

    }

    // cout <<i<<endl;


    while (i<s1.length())
    {
        if (s1[i]!='|')
        {
            rightbal+=s1[i];
            right+=1;
            i+=1;
        }

        else if (s1[i]=='|')
        {
            break;
            i+=1;
        }
        
    }

    // cout << left << " " <<right<<endl;

    if (left<right)
    {
        if (left+s2.length()>=right And (left+s2.length()-right)%2==0)
        {
            ll c1 = 0;
            while (left+c1<right)
            {
                leftbal+=s2[c1];
                c1+=1;
            }

            // cout << c1 << endl;
            ll op1 = (s2.length()-c1)/2;

            while (op1--)
            {
                leftbal+=s2[c1];
                c1+=1;


            }

            while (c1<s2.length())
            {
                rightbal+=s2[c1];
                c1+=1;
            }
            
            cout << leftbal <<"|" << rightbal;
            return true;
        }

        else
        {
            cout << "Impossible" <<endl;
            return false;
        }
    }
    
    else if (left>right)
    {
        // cout <<"h"<< endl;
        if (right+s2.length()>=left And (right+s2.length()-left)%2==0)
        {
            ll c2 = 0;
            while (c2+right<left)
            {
                rightbal+=s2[c2];
                c2+=1;
            }

            ll op2 = (s2.length()-c2)/2;
            while (op2--)
            {
                leftbal+=s2[c2];
                c2+=1;


            }

            while (c2<s2.length())
            {
                rightbal+=s2[c2];
                c2+=1;
            }
            
            cout << leftbal <<"|" << rightbal;
            return true;
        }

        else
        {
            cout << "Impossible" <<endl;
            return false;
        }
    }


    else if (left==right)
    {
        if (s2.length()%2==0)
        {
            ll j = 0;
            while (j<(s2.length())/2)
            {
                leftbal+=s2[j];
                j+=1;


            }

            while (j<s2.length())
            {
                rightbal+=s2[j];
                j+=1;
            }

            cout << leftbal <<"|" << rightbal;
            return true;
        }

        else
        {
            cout << "Impossible" <<endl;
            return false;
        }
    }



}

int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    string s1,s2; cin >> s1 >> s2;

    solve(s1,s2);
	
	
	return 0;
}
