#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insert_begin(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void insert_end(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        return;
    }

    node *ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = temp;
}

void delete_begin()
{
    if(head == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }

    node *temp = head;
    head = head->next;
    cout<<"Deleted element: "<<temp->data<<endl;
    delete temp;
}

void display()
{
    node *ptr = head;

    if(ptr == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }

    cout<<"Linked List: ";
    while(ptr != NULL)
    {
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int ch, x;

    do
    {
        cout<<endl<<"1.Insert at Beginning";
        cout<<endl<<"2.Insert at End";
        cout<<endl<<"3.Delete from Beginning";
        cout<<endl<<"4.Display";
        cout<<endl<<"5.Exit";

        cout<<endl<<"Enter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"Enter element: ";
                cin>>x;
                insert_begin(x);
                break;

            case 2:
                cout<<"Enter element: ";
                cin>>x;
                insert_end(x);
                break;

            case 3:
                delete_begin();
                break;

            case 4:
                display();
                break;
        }

    }while(ch != 5);

    return 0;
}