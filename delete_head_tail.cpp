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
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(a[i]);
    mover->next = temp;
    mover = temp;

    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* dlt_head(Node* head){
    if(head==NULL){
        return head;
    }
    Node* temp = head;
    head= head->next;
    delete temp;
    return head;
}
Node* dlt_tail(Node* head){
    if(head->next == NULL || head==NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
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
    // head= dlt_head(head);
    head= dlt_tail(head);
    print(head);
}