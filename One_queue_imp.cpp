#include<iostream>
#include<queue>
using namespace std;

class Stack{
    queue<int> q;
    public:
    void Push(int x){
        int n = q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int Pop(){
        int n=q.front();
        q.pop();
        return n;
    }
    int Top(){
        return q.front();
    }
    int Size(){
        return q.size();
    }

};
int main() {
  Stack s;
  s.Push(6);
  s.Push(3);
  s.Push(7);
//   s.Push(1);
  cout << "Top of the stack: " << s.Top() << endl;
  cout << "Size of the stack before removing element: " << s.Size() << endl;
  cout << "The deleted element is: " << s.Pop() << endl;
  cout << "Top of the stack after removing element: " << s.Top() << endl;
  cout << "Size of the stack after removing element: " << s.Size();

}