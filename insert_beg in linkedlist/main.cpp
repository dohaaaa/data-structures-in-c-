#include <iostream>

using namespace std;
struct node{

  int data;
  node* next;

  };

  node* head=NULL;
  void insertnode(int value);
  void display();
  void deletenode(int value);
  void insert_beg(int value);


int main()
{

   insertnode(10);
   insertnode(15);
    display();
   insert_beg(5);
    display();


   return 0;
}

   void insertnode(int value){

   node* new_node,*last;
   new_node=new node;
   new_node->data=value;

   if(head ==NULL){
    head =new_node;
    new_node->next=NULL;
   }
   else{
        last=head;
    while(last->next !=NULL){
       last=last->next;

       }
    last->next=new_node;
    new_node->next=NULL;


  }


   }

    void display(){

    node* current_node;

    if(head==NULL){
        cout<<" the linked list is empty";
    }
    else{

        current_node=head;
        while(current_node !=NULL){
            cout<<current_node->data<<"\t";
            current_node=current_node->next;

        }
    }
    cout<< endl;


    }

    void deletenode(int value){

    node* current,* previous;
    current=head;
    previous=head;

    if(current->data ==value){
       head=current->next;
        //free(current);
        return;
    }

    while(current->data != value){
        previous=current;
        current=current->next;

    }
   previous->next=current->next;
           // free(current);
    }


    void insert_beg(int value){

       node* new_node=new node;
       new_node->data=value;
       new_node->next=head;
       head=new_node;








    }


