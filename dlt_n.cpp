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
Node* dlt_n(Node* head,int n){
    if(head==NULL){
        return head;
    }
    if(n==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = head;
    Node* temp = head->next;
    int count=1;
    while(count!=n-1){
        prev = prev->next;
        temp = temp->next;
        count++;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}
Node* dlt_val(Node* head,int n){
    if(head==NULL){
        return head;
    }
    if(head->data==n){
        head = head->next;
        return head;
    }
    Node* prev = head;
    Node* temp = head->next;
    
    while(temp!=NULL){
        if(temp->data==n){
           prev->next = temp->next;
           delete temp;
           return head;
        }
        prev = prev->next;
        temp = temp->next;
       
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
    head = dlt_val(head,h);
    print(head);


}