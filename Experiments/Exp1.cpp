#include<iostream>
using namespace std;
//Program 1
//Implement stack using static array;
int stack[100], top = -1;
int size =10;
bool isFull(){
        return top==size-1;
}
bool isEmpty(){
        return top==-1;
}
void push(int v){
    if(isFull())
        cout<<"Stack Overflow"<<endl;
    else{
        top++;
        stack[top] = v;
    }
}
int pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    else{
        int v = stack[top];
        top--;
        cout<<v<<" is deleted"<<endl;
        return v;
    }
}
void display(){
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main(){
    push(60);
    push(70);
    push(80);
    push(90);
    pop();
    display();
}