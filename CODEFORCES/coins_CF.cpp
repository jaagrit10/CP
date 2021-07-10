// TEMPLATE_JAAGRIT_ARORA
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forloop_n for(ll i=0; i<n; i++)
#define And &&
#define Or ||

void coins()
{
    string arr[3];
    int b = 0;
    int a = 0;
    int c = 0;
    for (int i=0; i<3; i++)
    {
        cin >> arr[i];
    }

    for (int i=0; i<3; i++)
    {
        if (arr[i]=="A<B" Or arr[i]=="B>A")
        {
            b+=1;

        }

        else if (arr[i]=="A>B" Or arr[i]=="B<A")
        {
            a+=1;
        }

        else if (arr[i]=="A<C" Or arr[i]=="C>A")
        {
            c+=1;
        }

        else if (arr[i]=="A>C" Or arr[i]=="C<A")
        {
            a+=1;
        }

        else if (arr[i]=="C<B" Or arr[i]=="B>C")
        {
            b+=1;
        }

        else if (arr[i]=="C>B" Or arr[i]=="B<C")
        {
            c+=1;
        }
    }
    
    // cout << a << b << c <<endl;

    if (a>2 Or b>2 Or c>2)
    {
        cout << "Impossible" <<endl;
        return;
    }

    else if (a==b Or b==c Or c==a)
    {
        cout << "Impossible";
        return;

    }

    // cout << a << b << c <<endl;

    int arr1[3]={a,b,c};
    sort(arr1,arr1+3);
    string ans = "";
    for (int i=0; i<3; i++)
    {
        if (a==i)
        {
            ans+="A";
        }
        else if (b==i)
        {
            ans+="B";
        }

        else if (c==i)
        {
            ans+="C";
        }

        else
        {
            cout << "Impossible";
            return;
        }
    }

    cout << ans;
    return;

}

int main()


{
    flash
    coins();
    return 0;
}
