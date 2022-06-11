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
  void delete_beg();
  void delete_end();


int main()
{

   insertnode(5);
   insertnode(10);
    display();
   delete_end();
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
    void delete_beg(){

     if(head==NULL){

        cout<<" the linked list is empty\n";
     }
     else{
        node* first_node=head;
        head=first_node->next;
        delete(first_node);

     }

    }

   void delete_end(){

   if(head==NULL){
     cout<<" the linked list is empty\n";
   }
   else if(head->next==NULL){
    delete(head);
    head=NULL;
   }
   else{

    node* ptr =head;
    while(ptr->next->next != NULL){
       ptr=ptr->next;
    }
    delete(ptr->next);
    ptr->next=NULL;


   }



   }

