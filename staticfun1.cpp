#include<iostream>
using namespace std;

class sample
{
   static int a,b;        //declearing static data members
    public:
     
     //static data fucntion srf static data members ko le skta hai bs non static ko nhi 
    static void getdata()        //static member function
    {
        cout<<"Enter the value of a & b"<<endl;
        cin>>a>>b;
        cout<<"the value of a ="<<a<<endl;
        cout<<"the value of b ="<<b<<endl;
    }

};
int sample::a;    //these bot are static data members defined here
int sample::b;


int main()
{
   sample t;
   t.getdata();     //acccessing with object here
   sample::getdata();   //accessing with class name here

return 0;
}