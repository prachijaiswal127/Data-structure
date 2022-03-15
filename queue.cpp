# include<iostream>
using namespace std;
const int size=10;
int A[size];
int front=-1;
int rear=-1;

//function for add integer into queue
int enqueue(int x)
{
    if(front==-1)
    {
        front++;
    }
    if(rear==size-1)
    {
        cout<<"Queue is full";
    }
    else
    {
        A[++rear]=x;
    }
}
bool isEmpty()
{   if(front==rear)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isFull()
{
    if(rear=size-1)
    {
        return true;
    }
    else{
        return false;
    }
}

//function for delete an element 
bool dequeue()
{  
    if(isEmpty()==false)
    {
        return ++front;
    }
    else{
        return false;
    }  
}
int Front()
{
    if(isEmpty()==false)
    {
        return A[front];
    }
    else
    {
        return false;
    }
}
int Rear()
{
    if(isFull()==false)
    {
        return A[rear];
    }
    else
    {
        return false;
    }
}

int display()
{
    int i;
    for(i=front;i<=rear;i++)
    cout<<A[i];
}
int main()
{
  enqueue(34);
  enqueue(55);
  enqueue(7);
  dequeue();
  dequeue();
  isEmpty();
  isFull();
  display();
    return 0;
}