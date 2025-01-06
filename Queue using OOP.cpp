#include<bits/stdc++.h>
using namespace std;
// Queue using OOP

class Queue
{
private:
    int n;
    int *q;
    int start=-1;
    int rear=-1;
public:
    Queue()
    {
        n=5;
        q= new int[n];
    }
    Queue(int n)
    {
        this->n=n;
        q= new int[n];
    }


    bool isEmpty()
    {
        return start==-1 || start==rear+1;
    }

    bool isFull()
    {
        return rear==n-1;

    }


    void enQueue(int data)
    {
        if(isFull())
        {
            printf("\nQueue is Full !\n");
            return;
        }

        if(start==-1) start++;

        rear++;
        q[rear]=data;

    }

    int deQueue()
    {
        if(isEmpty())
        {
            printf("\nQueue is Empty !\n");
            return 0;
        }
        int member=q[start];
        start=start+1;
        return member;
    }

    void display()
    {
        if(isEmpty())
        {
            printf("\nQueue Is Empty ! Nothing To Display !!");
            return;
        }
        printf("\n");
        for(int i=start; i<=rear; i++)
            cout<<q[i]<<"\t";
        printf("\n");
    }



};


int main()
{
    Queue q; // default constructor
    // Queue q(10); // parameterize constructor
    // Queue *q= new Queue(5); // dynamic memory
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.display();
    cout<<q.deQueue()<<endl;
    q.display();

}

