// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void solve(ll n, ll a, ll arr[])
{
    ll ans = 0;
    if (a==1)
    {
        forloop_n
        {
            if (arr[i]==1)
            {
                ans++;
            }
        }

        cout << ans;
        return;

    }

    if (a==n)
    {
        forloop_n
        {
            if (arr[i]==1)
            {
                ans+=1;
            }
        }

        cout << ans;
        return;
    }

    else
    {
        if (arr[a-1]==1)
        {
            ans+=1;
        }

        ll left = a-2;
        ll right = a;

        while(left>-1 And right<n)
        {
            if (arr[left]==1 And arr[right]==1)
            {
                ans+=2;
            }

            left--;
            right++;



        }

        if (left<0 And right>n)
        {
            cout << ans;
            return;
        }


        if (left>-1)
        {
            for (ll i = left; i>-1; i--)
            {
                if (arr[i]==1)
                {
                    ans++;
                }
            }
        }

        if (right<n)
        {
            for (ll i = right; i<n; i++)
            {
                if (arr[i]==1)
                {
                    ans++;
                }
            }
        }



        cout << ans;
        return;
    }

}

int main()


{
    flash
    ll n,a; cin >> n >> a;
    ll arr[n];
    forloop_n
    {
        cin >> arr[i];
    }
    solve(n,a,arr);
    return 0;
}