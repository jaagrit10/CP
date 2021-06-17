// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void gems(int r1, int r2, int c1, int c2, int d1, int d2 )
{
    for (int i=1; i<10; i++)
    {
        for (int j=1; j<10; j++)
        {
            for (int k=1; k<10; k++)
            {
                for (int l=1; l<10; l++)
                {
                    if (i+j==r1 And l+k==r2 And i+l==c1 And j+k==c2 And i+k==d1 And j+l==d2 And i!=j And j!=k And k!=l And l!=i And k!=l And i!=k And j!=l)
                    {
                        cout << i <<" "<<j << "\n";
                        cout << l <<" "<< k <<"\n";
                        return;
                    } 

                }
            }
        }
    }

    cout << -1;
    return;
}

int main()

{
	flash
	// #ifndef ONLINE_JUDGE  //for solving questions in an online judge
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
     
    int r1,r2,c1,c2,d1,d2; cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    gems(r1,r2,c1,c2,d1,d2);
	
	
	return 0;
}

