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
    ll sumofb = 0;

    sort(arr,arr+n+2);
    for (ll i = 0; i<n+2; i++)
    {
        sumofb += arr[i];
    }

    ll sumofbcopy = sumofb;
    ll temp = 0;

    for (ll i = 0; i<n+2; i++)
    {
        sumofb = sumofb - arr[i];
        temp = arr[i];
        arr[i] = -1;
        if (sumofb%2==0)
        {
            ll lo = 0;
            ll hi = n+1;
            ll mid = 0;
            while(lo<=hi)
            {
                mid  = lo + (hi-lo)/2;

                if (arr[mid]==sumofb/2)
                {
                    bool arr1 = true;
                    bool sumu = true;
                    // cout << arr[i] << " " << i << " " << temp << endl; //debug
                    // for (ll deb = 0; deb < n+2; deb++)
                    // {
                    //     cout << arr[deb] <<endl;
                    // }
                    ll count = 0;
                    for (ll k=0; k<n+2; k++)
                    {
                        if (arr[k]!=temp And arr[k]!=sumofb/2 And count!=n And arr[k]!=-1)
                        {
                            cout << arr[k] << " ";
                            count +=1;
                        }

                        // else if (arr[k]==temp And arr1==true)
                        // {
                        //     arr1 = false;
                        // }

                        else if (arr[k]==sumofb/2 And sumu==true)
                        {
                            sumu = false;
                        }

                        else if (count!=n And arr[k]!=-1)
                        {
                            cout << arr[k] << " ";
                            count+=1;
                        }

                        if (count ==n)
                        {
                            cout << "\n";
                            return;

                        }
                    }
                    // cout << "yes" << endl;
                    cout << "\n";
                    return;
                }

                else if (arr[mid]<sumofb/2)
                {
                    lo = mid +1;
                }

                else
                {
                    hi  = mid -1;
                }
            }
            
        }

        sumofb = sumofb + temp;
        arr[i] = temp;
    }

    // cout << "NO" << endl;
    cout << "-1" << "\n";
    return;

}

int main()


{
    flash
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll arr[n+2]; 
        for (ll i = 0; i <n+2; i++)
        {
            cin >> arr[i];
        }
        solve(n,arr);
    }
    return 0;
}