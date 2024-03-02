#include<iostream>
using namespace std;

class stack{
public:
    int *arr;
    int top;
    int size;

    stack(int n){
        size=n;
        top=-1;
        arr=new int[size];
    }

    void push(int data){
        if(top==size-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else{top++;
            arr[top]=data;
            
        }
    }

    void pop(){
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            top--;
        }
    }

    void peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<arr[top]<<endl;
        }
    }
};
int main(){
    stack st(10);
    st.push(10);
    st.push(20);
    // st.push(30);
    st.pop();
    st.peek();
}