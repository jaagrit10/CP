// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||
#define vi vector<ll>
#define pb(n) push_back(n)
#define test_cases_loop ll t; cin >> t; while(t--)



int main()


{
    flash
    test_cases_loop
    {
        ll n,m,k; cin >> n >> m >> k;
        char arr[n][m];
        bool visited[n][m];
        bool ans = true;
        forloop_n
        {
        for (ll j = 0; j<m; j++)
        {
            visited[i][j]=false;
        }
        }

        forloop_n
        {
        for (ll j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
        }
        forloop_n
        // {
        // for (ll j = 0; j<m; j++)
        // {
        //     cout << arr[i][j];
        // }
        // cout <<"\n";
        // }

        for(ll i = n-1; i>=n-k; i--)
        {
            for ( ll j = 0; j<k-(n-1-i); j++)
            {
                // cout << arr[i][j];
                if (arr[i][j]=='*') 
                {
                    ans=false;
                    
                    
                }
            }

            for (ll p = m-1; p>=m-(k-(n-1-i));p--)
            {
                // cout << i << " "<< p <<endl;
                if (arr[i][p]=='*')
                {
                    ans = false;
                }
            }
            // cout << endl;

        }
        bool smalltick = false;


        for(ll i = n-1; i>=k; i--)
        {
            for (ll j = k; j<m-k; j++)
            {
                if (arr[i][j]=='*')
                {
                    // cout << i << " " << j << endl;
                    // visited[i][j]=true;
                    ll count = 0;
                    smalltick = false;
                    for (ll tick = 1; tick<=min(j,m-j-1); tick++)
                    {
                        if (i-tick>=0 And j+tick<m And j-tick>=0)
                        // cout << i-tick << " " << j+tick << "  " << i-tick << " " << j-tick << endl;
                        {    if (arr[i-tick][j+tick]=='*' And arr[i-tick][j-tick]=='*')
                            {
                                // cout << i-tick << " " << j+tick << "  " << i-tick << " " << j-tick << endl;
                                count++;
                                visited[i-tick][j+tick] = true;
                                visited[i-tick][j-tick] = true;
                                
                            }}

                    }


                    if (count<k And visited[i][j]!=true)
                    {
                        smalltick = true;
                        break;
                    }
                    visited[i][j] = true;
                }
            }


            if (smalltick)
            {
                break;
            }

        }


        bool visits = true;

        // forloop_n
        // {
        //     for (ll j = 0; j<m; j++)
        //     {
        //         cout << visited[i][j];
        //     }
        //     cout << endl;
        // }

        


        


        if (smalltick)
        {
            cout << "NO" << "\n";
        }




        else if (!ans)
        {
            cout << "NO" <<"\n";
            
        }

        

        else if (smalltick==false And ans==true )
        {
            for (ll i =0; i<n; i++)
            {
                for (ll j = 0; j<m; j++)
                {
                    if (arr[i][j]=='*' And visited[i][j]==false)
                    {
                        visits = false;
                        break;

                    }
                }

                if (!visits)
                {
                    break;
                }
            }


            if (!visits)
            {
                cout << "NO" << endl;
            }

            else
            {
                cout << "YES" <<endl;
            }

        }

        

        // else
        // {
        //     cout << "YES" << endl;
        // }
        // cout << smalltick <<" " << ans << " " << visits << endl;
        

        

    }

    return 0;
}