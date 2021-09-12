// make struct,destructor,constructor,check its implementation
// initialize structs and integers in heap memory
// <datatype*> nameofptr = new <datatype>
// initialize arr in heap memory
// use delete feature
// initialize 2D array in heap


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
int main()


{
    flash

    ll** arr2D = new ll*[3];
    for(ll i = 0; i<3; i++)
    {
        arr2D[i] = new ll[3];
    }

    for (ll i  = 0; i<3; i++)
    {
        for (ll j = 0; j<3; j++)
        {
            arr2D[i][j] = i;
        }
    }
    for (ll i  = 0; i<3; i++)
    {
        for (ll j = 0; j<3; j++)
        {
            cout << arr2D[i][j] << " ";

        }
        cout << "\n";
    }

    cout << *arr2D << endl;


    return 0;
}