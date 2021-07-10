// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

string sumofdigits(string k)
{
    ll sum = 0;
    // string k = to_string(n);
    // cout << k <<endl;
    string op = "";
    for (ll i = 0; i<k.size(); i++)
    {
        op = k[i];
        // cout << op <<endl;

        sum+= stoi(op);
    }
    // cout << "done " <<endl;

    string bc = to_string(sum);
    return bc;
}
void solve(string n)
{
    ll count = 0;
    string nice = n;
    while (nice.size()>1)
    {
        count++;
        nice = sumofdigits(nice);
        // cout << n<< endl;

    }

    cout << count;
    return;
}

int main()


{
    flash
    string n; cin >> n;
    solve(n);
    // string k = to_string(n);
    // cout << stoi(k)-1 <<endl;
    return 0;
}