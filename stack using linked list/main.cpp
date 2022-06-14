#include <iostream>

using namespace std;
struct node{

  int data;
  node* next;

  };

  node* top=NULL;



  void push(int value);
  int pop();
  void display();
  int peek();


int main()
{
    push(5);
    push(10);
    push(15);
    display();
    pop();
    display();
    cout<<"top="<<peek();


   return 0;
}



    void display(){

    node* current_node;

    if(top==NULL){
        cout<<" stack underflow";
    }
    else{

        current_node=top;
        while(current_node !=NULL){
            cout<<current_node->data<<"\n";
            current_node=current_node->next;
        }
    }
    cout<< endl;
    }

    void push(int value){

       node* new_node=new node;
       new_node->data=value;
       new_node->next=top;
       top=new_node;

    }
    int pop(){

     if(top==NULL){

        cout<<" stack underflow\n";
        return -1;
     }
     else{
            int value;
        node* first_node=top;
        top=first_node->next;
        value=first_node->data;
        delete(first_node);
        return value;
     }
    }

    int peek(){

    if(top==NULL){
       int value;
        cout<<" stack underflow\n";
        return -1;
        }
        else{
            return top->data;
        }



    }

