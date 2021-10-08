#include <bits/stdc++.h>
using namespace std;
class node
{
public:

    int data;
    node * next;

    node(int d)
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
    int size = 0;

    LinkedList()
    {
        head = NULL;
        
    }

    void add_at_head(int d)
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

    void add_at_tail(int d)
    {
        node *newtail = new node(d);
        if (head==NULL)
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

    void delete_at_tail()
    {
        if (!head)
        {
            cout << "LL is empty" << endl;
            return;
        }
    }

    void delete_at_head()
    {
        if (!head)
        {
            cout << "LL is Empty" <<endl;
            return;
        }

        node* temp = head->next;
        head = temp;

        delete temp;
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




};

int main()


{
    
    return 0;
}