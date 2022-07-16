#include<iostream>
using namespace std;
class author  //container class
{
    char aname[20];
    friend class book;

};
class book    //contained class
{
    char bname[20];
    float price;

    //author class ka obj yahan pa declear kiya ab humai main mai isko declear krne ki zarorat nhi
     author a;         //composition
     public:
     void get()
     {
         cout<<"Enter the author name :"<<endl;
         cin>>a.aname;
         cout<<"Enter the book name :"<<endl;
         cin>>bname;
         cout<<"Enter the price of Book :"<<endl;
         cin>>price;
     }
     void puts()
     {
         cout<<"Author name :"<<a.aname<<endl;
         cout<<"Book name :"<<bname<<endl;
         cout<<"Price of book :"<<price<<endl;

     }
};

int main()
{
 book b;         //here we have not made a class author obj ..kyu k woh humne uper class "book " mai krdeya tha.
 b.get();
 b.puts();

return 0;
}