#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next=nullptr;
    }
};

Node* convert(int a[],int n){
    Node* head = new Node(a[0]);
    Node* mover= head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* insert_at_k(Node* head,int data,int k){
    Node* temp = new Node(data);
    if(k==1){
        temp->next = head;
        return temp;
        
    }
    if(head==NULL){
        return temp;
    }
    int cnt = 0;
    Node* move = head;
    while(move->next!=NULL){
        cnt++;
        if(cnt==k-1){
            temp->next = move->next;
            move->next = temp;
            break;
        }
        move = move->next;
        
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
    Node* head = convert(a,n);
    int k;
    cin>>k;
    head = insert_at_k(head,10,k);
    print(head);
}