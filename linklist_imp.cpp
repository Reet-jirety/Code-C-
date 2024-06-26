#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data= d;
        next = NULL;
    }
};
class Stack{
    Node* top;
    int size;
    public:
    Stack(){
        top=NULL;
        size=0;
    }
    void push(int x){
        Node* ele = new Node(x);
        ele->next = top;
        top = ele;
        cout<<"element pushed"<<endl;
        size++;
    }
    int pop(){
        if(top==NULL){
            return -1;
        }
        int topdata= top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return topdata;
    }
    int Size(){
        return size;
    }
    bool empty(){
        return top==NULL;
    }
    int peek(){
        if(top==NULL){
            return -1;
        }
        return top->data;

    }
    void print(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        cout<<endl;
    }


};
int main() {
  Stack s;
  s.push(10);
  s.push(3);
  s.push(1);
  cout << "Element popped: " << s.pop() << "\n";
  cout << "Stack size: " << s.Size() << "\n";
  cout <<"Stack empty or not? "<<s.empty()<<"\n";
  cout << "stack's top element: " << s.peek() << "\n";
  s.print();
  return 0;
}