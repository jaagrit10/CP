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

void solve(ll n, string s)
{
    vector<char> alphabet;
    alphabet.push_back('A');
    alphabet.push_back('B');
    alphabet.push_back('C');
    alphabet.push_back('D');
    alphabet.push_back('E');
    alphabet.push_back('F');
    alphabet.push_back('G');
    alphabet.push_back('H');
    alphabet.push_back('I');
    alphabet.push_back('J');
    alphabet.push_back('K');
    alphabet.push_back('L');
    alphabet.push_back('M');
    alphabet.push_back('N');
    alphabet.push_back('O');
    alphabet.push_back('P');
    alphabet.push_back('Q');
    alphabet.push_back('R');
    alphabet.push_back('S');
    alphabet.push_back('T');
    alphabet.push_back('U');
    alphabet.push_back('V');
    alphabet.push_back('W');
    alphabet.push_back('X');
    alphabet.push_back('Y');
    alphabet.push_back('Z');
    ll count = 1;
    ll prev = 30;
    ll index = 0;
    forloop_n
    {
        auto it = find(alphabet.begin(), alphabet.end(), s[i]);
        index = it - alphabet.begin();
        if (index>prev)
        {
            count++;
        }

        else
        {
            count = 1;
        }

        prev = index;

        cout << count << " ";

    }

    cout << endl;
    
}

int main()


{
    flash
    ll t; cin >> t; while(t--)
    {
        ll n; cin >> n; 
        string s; cin >> s;
        solve(n,s);
    }
    return 0;
}