#include<bits/stdc++.h>
using namespace std;
// Queue using OOP template class

template<typename T>

class Queue
{
private:
    int n;
    T *q;
    int start=-1;
    int rear=-1;
public:
    Queue()
    {
        n=5;
        q= new T[n];
    }
    Queue(int n)
    {
        this->n=n;
        q= new T[n];
    }


    bool isEmpty()
    {
        return start==-1 || start==rear+1;
    }

    bool isFull()
    {
        return rear==n-1;

    }


    void enQueue(T data)
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

    T deQueue()
    {
        if(isEmpty())
        {
            printf("\nQueue is Empty !\n");
            return 0;
        }
        T member=q[start];
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
    Queue<string> q; // default constructor
    // Queue q(10); // parameterize constructor
    // Queue *q= new Queue(5); // dynamic memory
    q.enQueue("Richard");
    q.enQueue("Philip");
    q.enQueue("Aaron");
    q.enQueue("Florence");

    q.display();
    cout<<q.deQueue()<<endl;
    q.display();

}

