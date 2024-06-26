#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convert(int a[],int n){
    Node* head = new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* insert_tail(Node* head,int val){
    Node* temp = new Node(val);
    Node* t = head;
    while(t->next!=NULL){
        t= t->next;
    }
    t->next = temp;
    return head;
}


void print(Node* head){
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int h;
    cin>>h;
    Node* head = convert(a,n);
    head = insert_tail(head,h);
    print(head);


}