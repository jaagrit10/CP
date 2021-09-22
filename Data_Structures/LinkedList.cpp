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

class node
{
public:

    ll data;
    node * next;

    node(ll d)
    {
        data = d;
        next = NULL;
    }
};


class LinkedList
{
    public:
    node * head;

    LinkedList()
    {
        head = NULL;
    }

    void push_front(ll d)
    {
        node *newnode = new node(d);
        newnode->next = head;
        head = newnode;


    }

    void push_back(ll d)
    {
        node *newtail = new node(d);
        
    }


};

int main()


{
    flash
    return 0;
}