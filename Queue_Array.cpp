#include<iostream>
using namespace std;

int main()
{
    int q[100];
    int front=-1, rear=-1;
    int size, ch, x;

    cout<<"Enter size of queue: ";
    cin>>size;

    do{
        cout<<"\n1.Enqueue 2.Dequeue 3.Front 4.isEmpty 5.isFull 6.Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                if(rear==size-1)
                    cout<<"Queue is Full";
                else{
                    cout<<"Enter value: ";
                    cin>>x;
                    if(front==-1) front=0;
                    rear++;
                    q[rear]=x;
                }
                break;

            case 2:
                if(front==-1 || front>rear)
                    cout<<"Queue is Empty";
                else{
                    cout<<"Deleted: "<<q[front];
                    front++;
                }
                break;

            case 3:
                if(front==-1 || front>rear)
                    cout<<"Queue Empty";
                else
                    cout<<"Front element: "<<q[front];
                break;

            case 4:
                if(front==-1 || front>rear)
                    cout<<"Queue is Empty";
                else
                    cout<<"Queue not Empty";
                break;

            case 5:
                if(rear==size-1)
                    cout<<"Queue is Full";
                else
                    cout<<"Queue not Full";
                break;
        }

    }while(ch!=6);

    return 0;
}