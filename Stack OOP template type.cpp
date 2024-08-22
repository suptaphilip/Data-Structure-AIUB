#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Stack{
private:
    T *s;
    int n;
    int top;
public:
    Stack(){
        n=5;
        s = new T[n];
        top=0;
    }
    Stack(int n){
        this->n=n;
        s = new T[n];
        top=0;
    }

    int isFull(){
        return top==n?true:false;
    }

    void push(T e){
        if(isFull()){
                cout<<"Full\n";
                return;
                }
        s[top++]=e;
    }

    int isEmpty(){
        return top==0;

    }

    void pop(){
        if(isEmpty()){
            cout<<"empty\n";
            return;
        }
        top--;
    }

    T topElement(){
        return s[top-1];
    }

    void show(){

    for(int i=top-1;i>=0;i--){
        cout<<s[i]<<endl;
    }
    cout<<".................\n";
    }


};


int main(){

    Stack<string> *s  = new Stack<string>(2);
    s->push("Richard");
    s->push("Abdul");
    s->push("Araon");
    s->show();

return 0;
}

