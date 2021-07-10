// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, string arr[])
{
    string ans[n];
    ll left_pointer = 0;
    ll right_pointer = n-1;

    for (int i=n-1; i>-1; i--)
    {
        if (n%2!=0)
        {    
            if (i%2==0)
            {
                ans[right_pointer] = arr[i];
                right_pointer--;


            }
            else
            {
                ans[left_pointer] = arr[i];
                left_pointer++;

            }
        }

        else
        {
            if (i%2!=0)
            {
                ans[right_pointer] = arr[i];
                right_pointer--;


            }
            else
            {
                ans[left_pointer] = arr[i];
                left_pointer++;

            }

        }
    }

    for (ll i = 0; i<n; i++)
    {
        cout << ans[i];
    }
    return;

}

int main()


{
    flash
    ll n; cin >> n;
    string input; cin >> input;
    string arr[n];
    forloop_n
    {
        arr[i] = input[i];
    }

    solve(n,arr);
    return 0;
}