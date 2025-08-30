//exp 2.2
#include<iostream>
using namespace std;
int arr[100];
class queue{
    public:
    int f;
    int b;
    int s;
    queue(int size){
        f=0;
        b=0;
        s=size;
    }
    int size(){
        return b-f;
    }
    void push(int val){
        if(b==s){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[b++] = val;
    }
    void pop(){
        if(f-b==0){
            cout<<"Underflow";
            return;
        }
        f++;
    }
    int front(){
        if(f-b==0){
            cout<<"Underflow";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b==0){
            cout<<"Underflow";
            return -1;
        }
        return arr[b-1];
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    queue q(5);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
}