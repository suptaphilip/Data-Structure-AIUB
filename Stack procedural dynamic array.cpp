#include<bits/stdc++.h>
using namespace std;

int top=0;
int n=2;
int *s = new int[n];

int isFull(){
    return top==n?true:false;
}

void push(int e){
    if(isFull()){
            n=2*n;
            int *s1=new int[n];
            for(int i=0;i<top;i++){
               s1[i]=s[i];
            }
            s=s1;
            s[top++]=e;
            }
            else{

              s[top++]=e;
            }
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
    push(30);
    push(40);
    push(40);
    push(40);
    push(40);
    push(40);
    show();

return 0;
}
