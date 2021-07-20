// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll arr[])
{
    ll sum_ = 0; 
    forloop_n
    {
        sum_+=arr[i];
    }

    float average = (float)sum_/n;
    int average1 = sum_/n;
    float check = average - (float)average1;
    ll common = 0;
    ll prev = 0;
    if (check!=0)
    {
        cout << "NO";
        // cout << "debug1";
        return;
    }
    else

    {
        forloop_n
        {
            common = abs(arr[i]-average1);
            if (common==prev)
            {
                continue;
                prev = common;
                
            }

            else if (i==0)
            {
                prev = common;
            }

            else if (common==0)
            {
                continue;
            }

            else
            {
                cout << "NO";
                // debug
                // cout << "debug2" << " " << i << " " << common << " " << prev;
                return;
            }




        }



        cout << "YES";
        return;
    }


}

int main()


{
    flash
    ll n; cin >> n;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }

    solve(n,arr);
    return 0;
}