#include <iostream>

using namespace std;

  struct node{

  int data;
  node* next;

  };

  node* head=NULL;
  void insertnode(int value);


int main()
{
   insertnode(5);
   insertnode(10);
   insertnode(15);
   insertnode(7);

   return 0;
}

   void insertnode(int value){

   node* new_node;
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


