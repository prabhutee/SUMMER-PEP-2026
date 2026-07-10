//implement stack using array
#include <iostream>
#include<stack>
using namespace std;
class Stack
{
    int top;
    int arr[5];
public:
    Stack() {
        top = -1;
    }
    
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            top--;
        }
    }
    
    void push(int x)
    {
        if (top == 4)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    void peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Top element is: "<<arr[top]<<endl;
        }
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void size()
    {
        cout<< "Size of stack is: " << top + 1 << endl;
    }
};
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.peek();
    s.size();


    //INSTEAD OF MAKING STACK USING ARRAY AND LINKEDLIST, WE CAN USE DIRECT 

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Top element is: "<<st.top()<<endl;
    st.pop();
    cout<<"Top element is: "<<st.top()<<endl;


}