// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll m, char arr[], char pres[])
{
    unordered_map<char,bool> visit;
    ll count = 0;
    for (ll i=0; i<n; i++)
    {
        for (ll j=0; j<m-1; j++)
        {
            // cout << arr[i][j] << endl;
            if (visit.find(arr[i][j])==visit.end() And arr[i][j]!=pres And arr[i][j]!='.' )
            {
                // cout << "step1" <<endl;
                if ((arr[i][j+1])==pres)
                {
                
                    count++;
                    // cout << "hell" << " " << arr[i][j] << endl;
                    visit[arr[i][j]]=true;
                }

            }

            if (arr[i][j]==pres )
            {
                
                if(visit.find(arr[i][j+1])==visit.end() And arr[i][j+1]!=pres And arr[i][j+1]!='.')
                {
                    count++;
                    // cout << "op "<<" " << arr[i][j+1] << endl;
                    visit[arr[i][j+1]]=true;
                }
            }


        }
    }
    for (ll i=0; i<n-1; i++)
    {
        for (ll j=0; j<m; j++)
        {
            // cout << arr[i][j] << endl;
            if (visit.find(arr[i][j])==visit.end() And arr[i][j]!=pres And arr[i][j]!='.' )
            {
                // cout << "step1" <<endl;
                if (arr[i+1][j]==pres)
                {
                
                    count++;
                    // cout << "hell" << " " << arr[i][j] << endl;
                    visit[arr[i][j]]=true;
                }

            }

            if (arr[i][j]==pres )
            {
                if (visit.find(arr[i+1][j])==visit.end() And arr[i+1][j]!=pres And arr[i+1][j]!='.')
                {
                    count++;
                    // cout << "hella"<< " " << arr[i+1][j] << endl;
                    visit[arr[i+1][j]]=true;
                }
                
            }


        }
    }

    cout << count;
    return;
}

int main()


{
    flash
    ll n,m; cin >> n >> m;
    char pres; cin >> pres;
    char arr[n][m];
    forloop_n
    {
        for (ll j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // cout << pres;
    // forloop_n
    // {
    //     for (ll j = 0; j<m; j++)
    //     {
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    // cout << arr[1][1];



    solve(n,m,arr,pres);

    // unordered_map<char,bool> visit;
    // ll count = 0;
    // for (ll i=0; i<n; i++)
    // {
    //     for (ll j=0; j<m-1; j++)
    //     {
    //         // cout << arr[i][j] << endl;
    //         if (visit.find(arr[i][j])==visit.end() And arr[i][j]!=pres And arr[i][j]!='.' )
    //         {
    //             // cout << "step1" <<endl;
    //             if (arr[i][j+1]==pres)
    //             {
                
    //                 count++;
    //                 // cout << "hell" << " " << arr[i][j] << endl;
    //                 visit[arr[i][j]]=true;
    //             }

    //         }

    //         if (arr[i][j]==pres )
    //         {
    //             // if (visit.find(arr[i+1][j])==visit.end() And arr[i+1][j]!=pres And arr[i+1][j]!='.')
    //             // {
    //             //     count++;
    //             //     cout << "hella"<< " " << arr[i+1][j] << endl;
    //             //     visit[arr[i+1][j]]=true;
    //             // }
    //             if(visit.find(arr[i][j+1])==visit.end() And arr[i][j+1]!=pres And arr[i][j+1]!='.')
    //             {
    //                 count++;
    //                 // cout << "op "<<" " << arr[i][j+1] << endl;
    //                 visit[arr[i][j+1]]=true;
    //             }
    //         }


    //     }
    // }
    // for (ll i=0; i<n-1; i++)
    // {
    //     for (ll j=0; j<m; j++)
    //     {
    //         // cout << arr[i][j] << endl;
    //         if (visit.find(arr[i][j])==visit.end() And arr[i][j]!=pres And arr[i][j]!='.' )
    //         {
    //             // cout << "step1" <<endl;
    //             if (arr[i+1][j]==pres)
    //             {
                
    //                 count++;
    //                 // cout << "hell" << " " << arr[i][j] << endl;
    //                 visit[arr[i][j]]=true;
    //             }

    //         }

    //         if (arr[i][j]==pres )
    //         {
    //             if (visit.find(arr[i+1][j])==visit.end() And arr[i+1][j]!=pres And arr[i+1][j]!='.')
    //             {
    //                 count++;
    //                 // cout << "hella"<< " " << arr[i+1][j] << endl;
    //                 visit[arr[i+1][j]]=true;
    //             }
    //             // if(visit.find(arr[i][j+1])==visit.end() And arr[i][j+1]!=pres And arr[i][j+1]!='.')
    //             // {
    //             //     count++;
    //             //     cout << "op "<<" " << arr[i][j+1] << endl;
    //             //     visit[arr[i][j+1]]=true;
    //             // }
    //         }


    //     }
    // }

    // cout << count;
    return 0;
}