#include <iostream>

using namespace std;


 struct Book{

   string name;
   string author;
   int pages;
   double price;
   };


int main()
{
  Book b1;
   b1.name="morning makeover";
   b1.author="Damon Zahariades";
   b1.pages=175;
   b1.price=60;

 //   Book b1={"morning makeover","Damon Zahariades",175,60};

  /*  cout<<"Enter the book name:";

       cin >>b1.name;*/

   cout<<b1.name;



  /* Book books[10];
   books[0].name="morning makeover";

    cout<<books[0].name;*/



}
