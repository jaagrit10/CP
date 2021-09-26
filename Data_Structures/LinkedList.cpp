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
    node *tail;
    ll size = 0;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(ll d)
    {
        node *newnode = new node(d);
        if (head==NULL)
        {
            tail = newnode;
        }
        
        newnode->next = head;
        head = newnode;
        size++;


    }

    void push_back(ll d)
    {
        node *newtail = new node(d);
        if (tail==NULL)
        {
            tail = newtail;
            head = newtail;
        }
        
        else
        {
            tail->next = newtail;
            tail = newtail;
        }
        
        size++;


    }


    void reverse()
    {
        node* cur = head;
        node * prev = NULL;
        
        while(cur)
        {
            node* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            


            
        }

        swap(head,tail);
        
    }

    void reversek(ll counter, ll k)
    {   node* start = head;

        while(start)
        {
            node* cur = start;
            node * prev = NULL;
            counter = 0;
            while(counter<k And cur!=NULL)
            {
            node* temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
            counter++;
            }

            

        start->next = cur;

        // swap(start,prev);
        // cout << start->data << " " << cur->data << endl;


        start = cur;

        }

    }

    const int k=3;
    node* reverse_k_at_a_time(node* curr_head)
    {
        if(!curr_head) return NULL;
        int i=0;
        node* previous = NULL;
        node* copy_head = curr_head;
        while(i<k && curr_head)
        {    
            node* temp = curr_head->next;
            curr_head->next = previous;
            previous= curr_head;
            curr_head = temp;
            i++;
        }
        
        copy_head->next = reverse_k_at_a_time(curr_head);
        return previous;
    }


    


    void printlinkedlist()
    {
        node* cur = head;
        while(cur)
        {
            
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }

    void printlinkedlistnew()
    {
        node* cur = head->next->next;
        while(cur)
        {
            
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }



    void medianofsortedLL()
    {
        node* fast = head;
        node* slow = head;

        while(fast->next!=NULL And fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast->next==NULL)
        {
            cout << slow->data << endl;
            return;
        }

        else
        {
            cout << ((float)slow->data + (float)slow->next->data)/2 << endl;
            return;
        } 





    }


};

int main()


{
    flash
    LinkedList l;
    for (ll i = 0; i<8; i++)
    {
        l.push_back(i+1);
    }
    l.printlinkedlist();
    node *newhead = l.reverse_k_at_a_time(l.head);
    l.head = newhead;
    l.printlinkedlist();
    return 0;
}