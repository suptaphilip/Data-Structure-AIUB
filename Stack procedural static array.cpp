#include<bits/stdc++.h>
using namespace std;

#define n 5
int s[n];
int top=0;

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

int main(){

    push(10);
    push(20);
    cout<<topElement()<<endl;

return 0;
}
