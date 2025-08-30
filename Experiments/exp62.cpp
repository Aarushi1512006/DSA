//exp 6.2
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val= v;
        this->next = NULL;
    }
};
class Queue{
    public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head = tail = NULL;
        size=0;
    }
    void push(int v){
        Node* temp = new Node(v);
        if(size==0){
            head = temp;
            tail=temp;
            size++;
            return;
        }
        tail->next=temp;
        tail = temp;
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Underflow"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        size--;
        delete(temp); // to stop wastage of space
    }
    int front(){
        if(size==0){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Underflow"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    q.display();
    q.push(60);
    q.push(70);
    q.push(80);
    q.display();
}