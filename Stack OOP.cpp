#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int *s;
    int n;
    int top;
public:
    Stack(){
        n=5;
        s = new int[n];
        top=0;
    }
    Stack(int n){
        this->n=n;
        s = new int[n];
        top=0;
    }

    int isFull(){
        return top==n?true:false;
    }

    void push(int e){
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

    int topElement(){
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

    Stack *s  = new Stack(2);
    s->push(10);
    s->push(20);
    s->push(30);
    s->show();

return 0;
}
