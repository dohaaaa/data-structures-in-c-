#include <iostream>

using namespace std;
#define size 5
int queue[size];
int front=-1,rear =-1;

 void enqueue(int value);
 void dequeue();
 int peek();
 void display();

int main()
{
      enqueue(5);
      enqueue(10);
      enqueue(15);
      display();
      dequeue();
       display();
      cout<<"peek="<<peek();


}

  void enqueue(int value){

  if(rear !=size){
        if(rear == -1 && front == -1){
            front++;
            queue[++rear]=value;
        }
        else{
            queue[++rear]=value;
        }

  }
  else{
    cout<<"queue is full"<<endl;
  }
  }

  void dequeue(){
    if(rear != -1 && front != -1 && front<=rear){
    front++;
  }
  else{
    cout<<"queue is empty"<<endl;
  }
  }
  int peek(){
  if(rear != -1 && front != -1 && front<=rear){
   return queue[front];
  }
  else{
    cout<<"queue is empty"<<endl;
    return -1;
  }

  }
  void display(){
  if(rear != -1 && front != -1 && front<=rear){
    for(int i=front;i<=rear;i++){
        cout<< queue[i]<<"\t";
    }
    cout<<endl;
  }
  else{
    cout<<"queue is empty"<<endl;

  }
  }
