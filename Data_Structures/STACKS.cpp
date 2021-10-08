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
int main()


{
    flash  
    stack<ll> left;
    stack <ll> bottom;
    ll n; cin >> n; 
    forloop_n
    {
        ll x; cin >> x;
        left.push(x);
    }

    bool op = true;
    ll count = 1;

    while(count<=n)
    {

        if ( bottom.size()!=0 And bottom.top()==count)
        {
            cout << bottom.top() << endl;
            count++;
            bottom.pop();
            continue;
        }
        else if (left.size()!=0)
        {   while(left.top()!=count)
            {
            
                bottom.push(left.top());
                // cout << bottom.top() << "--" << endl;
                left.pop();
                // cout << left.top() << endl;
                
            }
        }
        if (left.size()==0 And count<n And bottom.top()!=count)
        {
            cout << "NO" << endl;
            op = false;
            break;

        }
        else if (left.size()!=0 And left.top()==count)
        {
            count++;
            left.pop();
            continue;
        }

        

        else
        {
            cout << "NO" << endl;
            op = false;
            break;
        }

        


    }

    if (op)
    {
        cout << "YES" << endl;
    }
     
    return 0;
}