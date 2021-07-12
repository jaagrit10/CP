// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll m, ll x)
{
    vector<vector<ll>> shift;
    vector<char> lessthanx;
    char arr[n][m];
    string keysonkeyboard = "";
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lowercase = "abcdefghijklmnopqrstuvwxyz";

    forloop_n
    {
        for(ll j = 0; j<m; j++)
        {
            cin >> arr[i][j];
            keysonkeyboard+=arr[i][j];

        }
    }


    forloop_n
    {
        for (ll j = 0; j<m; j++)
        {

            if (arr[i][j]=='S')
            {
                vector<ll> coordinates;
                coordinates.push_back(i);
                coordinates.push_back(j);

                shift.push_back(coordinates);

            }
        }
    }
    float distance = 0;

    forloop_n
    {
        for ( ll j = 0; j<m; j++)
        {
            if (arr[i][j]!='S')
            {
                for (ll op = 0; op<shift.size();op++)
                {
                    if ((i-shift[op][0])*(i-shift[op][0]) + (j-shift[op][1])*(j-shift[op][1])<=x*x)
                    {
                        lessthanx.push_back(arr[i][j]);
                    }

                }
            }
        }
    }


    // for (ll lulu = 0; lulu<keysonkeyboard.size();lulu++)
    // {
    //     cout << keysonkeyboard[lulu]<<endl;
    // }


    ll lengthofoutput; cin >> lengthofoutput;
    string output; cin >> output;
    ll ans = 0;

    if (shift.size()==0)
    {
        for(ll i=0; i<lengthofoutput; i++)
        {
            for (ll j = 0; j<uppercase[j];j++)
            {
                if (output[i]==uppercase[j])
                {
                    cout << -1;
                    return;
                }
            }

        }

    }

    for ( ll i = 0; i< lengthofoutput; i++)
    {


        for (ll j=0; j<uppercase.size(); j++)
        {
            if (output[i]!=uppercase[j] And j==uppercase.size()-1)
            {
                for(ll u = 0; u<keysonkeyboard.size();u++)
                {
                    if(output[i]!=keysonkeyboard[u] And u==keysonkeyboard.size()-1)
                    {
                        // cout << output[i] << " " <<keysonkeyboard[u]<<endl;
                        cout << -1;
                        return;


                    }

                    else if (output[i]==keysonkeyboard[u])
                    {
                        break;
                    }
                }
                break;
            }

            else if (output[i]==uppercase[j])
            {
                // cout << "loda" <<endl;
                for(ll u = 0; u<keysonkeyboard.size();u++)
                {
                    // cout << keysonkeyboard[u] <<endl;
                    // cout << lowercase[j] <<" " << keysonkeyboard[u]<<endl;

                    if (keysonkeyboard[u]==lowercase[j])
                    {
                        break;
                    }
                    else if(lowercase[j]!=keysonkeyboard[u] And u==keysonkeyboard.size()-1)
                    {
                        // cout << lowercase[j] << " " <<keysonkeyboard[u]<<endl;
                        cout << -1;
                        return;


                    }

                    else if (lowercase[j]==keysonkeyboard[u])
                    {
                        break;
                    }
                }
                for (ll op = 0; op<lessthanx.size(); op++)
                {
                    if (lowercase[j]!=lessthanx[op] And op==lessthanx.size()-1)
                    {
                        // cout <<lowercase[j] <<" " <<  lessthanx[op] << endl;
                        ans++;
                    }

                    else if (lowercase[j]==lessthanx[op])
                    {
                        break;
                    }
                }

                break;
            }
        }
        


    }

    cout << ans;
}

int main()


{
    flash
    ll n,m,x; cin >> n >> m >> x;
    solve(n,m,x);
    return 0;
}