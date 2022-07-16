/*Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.*/
#include<bits/stdc++.h>
using namespace std;

class publication
{   
    char str[20];
    float price;
    public:
   void  getdata(){
       cout<<"Enter the name of book: "<<endl;
       cin>>str;
       cout<<"Enter the price of book: "<<endl;
       cin>>price;
   }
   void putdata()
   {
       cout<<"Book name: "<<str<<endl;
       cout<<"Book price: "<<price;
   }

};
class book:public publication
{
  int pagecount;
  public:
  void getdata()
  {
        publication::getdata(); //call publication class function to get data
      cout<<"Enter the pages of book: "<<endl;
      cin>>pagecount;
  }
  void putdata()
  {
      publication::putdata();   //Show Publication data
      cout<<"Pages: "<<pagecount;
  }

};
class tape : public publication
{
    public:
 float time;
 void getdata()
 {
       publication::getdata(); // No need of this calling again
     cout<<"Playing time in minutes: "<<endl;
     cin>>time;
 }
 void putdata()
 {
    publication::putdata();    // no need of this calling  
     cout<<"playing time: "<<time;
 }
};

int main()
{
book b;
 tape t;
 b.getdata();
 t.getdata();
 b.putdata();
 t.putdata();
 

return 0;
}