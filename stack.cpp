#include<iostream>
using namespace std;

const int sz=100;
int stak[sz];
int peek=-1;

//function to push an integer into stack
void push(int value)   
{
    stak[++peek]=value;
}

//function to check stack is empty
bool isEmpty()
{
    if (peek==-1)
    {
        return true;

    }  
    else
    {
        return false;
    }
}

//function to check stack is full
bool isFull()
{
    if(peek==sz-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//function to remove an element from top of the stack
bool pop()
{
  if(isEmpty()==false)
  {
      peek--;
  }
  else{
      return false;
  }
}

//funtion to check top element
int top()
  {
    return stak[peek]; 
  }

//function to display elements
int display()
{
    for(int i=0;i<=peek;i++)
    {
        cout<<stak[i]<<" ";
    }
    cout<<endl;
}
int main()
{   
    int n;
    
    while(1)
    {   cout<<"Enter 1 for push"<<endl;
        cout<<"Enter 2 for Empty"<<endl;
        cout<<"Enter 3 for full"<<endl;
        cout<<"Enter 4 for pop"<<endl;
        cout<<"Enter 5 for top"<<endl;
        cout<<"Enter choice:";
        cin>>n;

        if(n==5)
        break;              //break the statement

        switch(n)
        {
            case 1:
            {   cout<<"Enter value for push"<<endl;
                int p;
                cin>>p;
                push(p);
                break;
            }
            case 2:
            {   
                isEmpty();
                break;
            }
            case 3:
            {
                isFull();
                break;
            }
            case 4:
            {
                pop();
                break;
            }
            case 5:
            {
                top();
                break;
            }
            default:
            {
                cout<<"Wrong choice";
            }

        }
        display();
    }
    
    return 0;
}

