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
void printnumbers_Two_Three_Five(ll l, ll r)
{
    queue<ll> q;
    q.push(2);q.push(3);q.push(5);
    // cout << q.front() << endl;

    while(!q.empty())
    {   
        // cout << q.front() << endl;


        while(q.front()<=r And q.front()>=l)
        {
            ll printer = q.front();
            cout << q.front() << endl;
            q.pop();
            q.push(10*printer+2);
            q.push(10*printer+3);
            q.push(10*printer+5);
        }

        if (q.front()>r)
        {
            break;
            return;
        }
        ll printer = q.front();
        // cout << q.front() << endl;
        q.pop();
        q.push(10*printer+2);
        q.push(10*printer+3);
        q.push(10*printer+5);


    }


    return;
    



}

int main()


{
    flash
    ll l,r; cin >> l >> r;
    printnumbers_Two_Three_Five(l,r);
    return 0;
}