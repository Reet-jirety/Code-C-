#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    Node(int data1,Node* next1,Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
};
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* convert(int a[],int n){
    Node* head = new Node(a[0]);
    Node* prev = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(a[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;

}
Node* delete_tail(Node* head){
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* prev = temp->prev;
    prev->next =NULL;
    temp->prev = NULL;
    delete temp;
    return head;
    

    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Node* head = convert(a,n);
    head = delete_tail(head);
    print(head);
    // cout<< head->next->data <<endl;
}