#include <iostream>

using namespace std;

int main()
{

    int x=20;
  // printf("%d",&x);
   int *ptr=&x;
   *ptr=25;
  cout<<*ptr;
   // cout<<x;

  /* Store an unnamed value for the variable*/

     //int* ptr= new int(20);
   //  cout<<*ptr;

    return 0;
}
