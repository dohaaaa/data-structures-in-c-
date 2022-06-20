#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};
  node* front=NULL;
  node* rear=NULL;

  void enqueue(int value);
  void dequeue();
  int peek();
  void display();


int main()
{
     enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();//12345
    dequeue();
    display();//2345

    cout<< "peek="<< peek();// peek=2

}

 void enqueue(int value){

 node* new_node= new node;
 new_node->data=value;
 new_node->next=NULL;
 if(front==NULL){
    front = rear =new_node;
 }
 else{
    rear->next=new_node;
    rear=new_node;
 }

 }

 void dequeue(){
     if(rear==NULL){
        cout<<"queue is empty"<<endl;
     }
     else if(front==rear){
        node*ptr=front;
        front=rear=NULL;
        delete(ptr);
     }
 else{
    node*ptr=front;
        front=front->next;
        delete(ptr);
 }
 }

 int peek(){
 if(front==NULL){
        cout<<"queue is empty"<<endl;
        return -1;
     }
     else{
        return front->data;
     }
 }
  void display(){
      if(front==NULL){
        cout<<"queue is empty"<<endl;
     }
     else{
        node* current =front;
        while(current !=NULL){
            cout<<current->data<<"\t";
            current=current->next;
        }
        cout<<endl;
     }
  }
