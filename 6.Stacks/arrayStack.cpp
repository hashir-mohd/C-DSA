#include <iostream>
using namespace std;

struct myStack
{
    int *arr;
    int cap;
    int top;
    myStack(int c){
        cap=c;
        arr =new int[cap];
        top =-1;
    }
    void push(int x){
        if(top==cap-1){
            cout <<"stack is full" << endl;
            return;
        }
        top++;
        arr[top]=x;
    };
    int pop(){
        if(top == -1){
            cout << "stack is empty" << endl;
            return 0;
        }
        int res = arr[top];
        top--;
        return res;
    };
    int peek(){
        if(top ==-1){
            cout <<"stack is empty" << endl;
            return 0;
        }
        return arr[top];
    };
    int size(){
        return (top+1);
    };
    void isEmpty(){
        if(top==-1){
            cout << "stack is empty" << endl;
        }
        else{
            cout << "stack is not empty" << endl;
        }
    };
    void display(){
        for(int i =0; i <=top ;i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    };
};


int main(){
    myStack s(4);
    
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.display();
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.push(4);
    s.display();
    return 0;
}