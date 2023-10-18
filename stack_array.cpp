#include<iostream>
#define SIZE 5
#define ERROR -999999
using namespace std;
 
class Stack
{
    private:
    int top;
    int array[SIZE];
    public:
    Stack();
    void Push(int);
    int Pop();
    int Peek();
    void Print();
};
Stack::Stack()
{
    top=-1;
}
int Stack::Pop()
{
    if(top==-1)
    {
        cout<<"Stack is Empty"<<endl;
        return ERROR;
    }
    return array[top--];
}
void Stack::Push(int element)
{
    if(top==(SIZE-1))
    {
        cout<<"Stack is full"<<endl;
        return;
    }
    array[++top]=element;
}
int Stack::Peek()
{
    return array[top];
}
void Stack::Print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    Stack s;
    s.Pop();
    s.Push(10);
    s.Push(20);
    s.Print();
    s.Pop();
    s.Print();
    s.Push(30);
    s.Push(40);
    cout<<s.Peek()<<endl;
    s.Push(50);
    s.Push(60);
    s.Push(70);
    s.Print();
}