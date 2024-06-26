#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next = nullptr;
    }
};
Node* convert(int arr[],int n){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int length(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        // cout<<temp->data<<"->";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Node* head = convert(a,n);
    cout<<length(head)<<endl;

}