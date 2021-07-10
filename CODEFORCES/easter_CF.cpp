// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void easter(ll n)
{
    ll iterates = n/4;
    ll iterate = n/4;
    string ans = "";
    for (ll i=0; i<iterates; i++)
    {
        if (i%2!=0)
        {
            ans+="RVIB";
        }
        else
        {
            ans+="RYOG";
        }
    }

    // cout << iterate <<endl;
    string finalans = "";

    if (iterate%2==0 And n%4!=0)
    {
        if (n%4==1)
        {
            ans+="G";
        }
        else if (n%4==2)
        {
            ans+="OG";
        }
        else if (n%4==3)
        {
            ans+="YOG";
        }
        
    }

    else if (iterate%2!=0 And n%4!=0)
    {
        if (n%4==1)
        {
            ans+="B";
        }
        else if (n%4==2)
        {
            ans+="IB";
        }
        else if (n%4==3)
        {
            ans+="VIB";
        }
    }
    

    cout << ans <<endl;
    return;


    
}

int main()


{
    flash
    // string a = "a";
    // string b = "b";
    // string c = a+b;
    // cout << c <<endl;

    ll n; cin >> n; 
    easter(n);
    
    return 0;
}