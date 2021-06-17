// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

bool solve(string arr[])
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (arr[i][j]=='#' And arr[i+1][j]=='#' And arr[i][j+1]=='#' And arr[i+1][j+1]=='.')
            {
                return true;
            }
            else if (arr[i][j]=='#' And arr[i+1][j]=='.' And arr[i][j+1]=='#' And arr[i+1][j+1]=='#')
            {
                return true;
            }

            else if (arr[i][j]=='.' And arr[i+1][j]=='#' And arr[i][j+1]=='#' And arr[i+1][j+1]=='#')
            {
                return true;
            }
            else if (arr[i][j]=='#' And arr[i+1][j]=='#' And arr[i][j+1]=='.' And arr[i+1][j+1]=='#')
            {
                return true;
            }
            else if (arr[i][j]=='#' And arr[i+1][j]=='#' And arr[i][j+1]=='#' And arr[i+1][j+1]=='#')
            {
                return true;
            }

        }
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (arr[i][j]=='.' And arr[i+1][j]=='.' And arr[i][j+1]=='.' And arr[i+1][j+1]=='#')
            {
                return true;
            }
            else if (arr[i][j]=='.' And arr[i+1][j]=='#' And arr[i][j+1]=='.' And arr[i+1][j+1]=='.')
            {
                return true;
            }

            else if (arr[i][j]=='#' And arr[i+1][j]=='.' And arr[i][j+1]=='.' And arr[i+1][j+1]=='.')
            {
                return true;
            }
            else if (arr[i][j]=='.' And arr[i+1][j]=='.' And arr[i][j+1]=='#' And arr[i+1][j+1]=='.')
            {
                return true;
            }
            else if (arr[i][j]=='.' And arr[i+1][j]=='.' And arr[i][j+1]=='.' And arr[i+1][j+1]=='.')
            {
                return true;
            }

        }
    }

    return false;
}

int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

    string arr[4];

    for (int i=0; i<4; i++)
    {
        cin >> arr[i];
    }
    // for (int i=0; i<4; i++)
    // {
    //     for (int j=0; j<4; j++)
    //     {
    //         cout << arr[i][j] <<" ";
    //     }

    //     cout << "\n";
    // }


    if (solve(arr)==true)
    {
        cout << "YES";
    }

    else {
        cout << "NO";
    }

	
	
	return 0;
}

