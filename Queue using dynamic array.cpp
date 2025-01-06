#include<bits/stdc++.h>
using namespace std;
// Queue using static array

#define n 5       // symbolic constant

int start=-1,rear=-1;   //  global variable
int *Queue=new int[n];


bool isEmpty(){
    return start==-1 || start==rear+1;
}

bool isFull(){
    return rear==n-1;

}


void enQueue(int data)
{
    if(isFull()){
        printf("\nQueue is Full !\n");
        return;
    }

    if(start==-1) start++;

        rear++;
        Queue[rear]=data;

}

int deQueue()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty !\n");
        return 0;
    }
    int member=Queue[start];
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
    for(int i=start;i<=rear;i++)
        cout<<Queue[i]<<"\t";
        printf("\n");
}



int main()
{
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    cout<<deQueue()<<endl;
    display();
    cout<<deQueue()<<endl;
    cout<<deQueue()<<endl;
    cout<<deQueue()<<endl;
    cout<<deQueue()<<endl;
    cout<<deQueue()<<endl;
    display();

return 0;
}
