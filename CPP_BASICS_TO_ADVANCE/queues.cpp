#include<iostream>
using namespace std;
class Queue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int s)
    {
        size=s;
        arr=new int[s];
        front=0;
        rear=0;
    }
    void enqueue(int val)
    {
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            arr[rear]=val;
            rear++;
        }
    }
    void dequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            front++;
        }
    }

};
int main()
{

}

//Valid paranthesis