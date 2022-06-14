#include <iostream>

using namespace std;

#define size 5
int stack[size],top=-1;
void push(int value);
int pop();
int peek();
void display();

int main()
{
    push(5);
    push(10);
    push(15);
    display();
    pop();
    display();
   cout<<" peek="<<peek()<<endl;
    display();


}

    void push(int value){
    if(top==size -1){
       cout<<"stack overflow"<<endl;
      }
    else{
      top++;
       stack[top]=value;
     }
    }

    int pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        return stack[top--];
    }
    }


    int peek(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        return stack[top];
    }
    }

    void display(){

    if(top==-1){
        cout<<"stack underflow"<<endl;
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }


    }
